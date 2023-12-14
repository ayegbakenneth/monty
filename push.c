#include "monty.h"
/**
 * f_push - This function add a node to a stack
 * @head: This is the head of the stack
 * @counter: To aid iteration
 * Return: nothing
*/
void f_push(stack_t **head, unsigned int counter)
{
	int t, k = 0, chezz = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			k++;
		for (; bus.arg[k] != '\0'; k++)
		{
			if (bus.arg[k] > 57 || bus.arg[k] < 48)
				chezz = 1; }
		if (chezz == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	t = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, t);
	else
		addqueue(head, t);
}
