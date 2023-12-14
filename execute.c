#include "monty.h"
/**
* execute - This function is to execute the opcode
* @stack: linked head
* @counter: To count the line
* @file: Monty file pointer
* @content: content line
* Return: nothing
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t pent[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int j = 0;
	char *tk;

	tk = strtok(content, " \n\t");
	if (tk && tk[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (pent[j].opcode && tk)
	{
		if (strcmp(tk, pent[j].opcode) == 0)
		{	pent[j].f(stack, counter);
			return (0);
		}
		j++;
	}
	if (tk && pent[j].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, tk);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
