#include "monty.h"
/**
 * f_swap - for adding top elements
 * @head: head of the stack
 * @counter: couting the line numbers
 * Return: nothing
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *p;
	int total = 0, ken;

	p = *head;
	while (p)
	{
		p = p->next;
		total++;
	}
	if (total < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	p = *head;
	ken = p->n;
	p->n = p->next->n;
	p->next->n = ken;
}
