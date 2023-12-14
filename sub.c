#include "monty.h"
/**
  *f_sub- for subtraction
  *@head: head of the stack
  *@counter: for number of lines
  *Return: nothing
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *ken;
	int faz, ten;

	ken = *head;
	for (ten = 0; ken != NULL; ten++)
		ken = ken->next;
	if (ten < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ken = *head;
	faz = ken->next->n - ken->n;
	ken->next->n = faz;
	*head = ken->next;
	free(ken);
}
