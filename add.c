#include "monty.h"
/**
 * f_add - Adding elements at stack top
 * @head: head of the stack
 * @counter: the line counter
 * Return: nothing
*/
void f_add(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	p = *head;
	ken = p->n + p->next->n;
	p->next->n = ken;
	*head = p->next;
	free(p);
}
