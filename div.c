#include "monty.h"
/**
 * f_div - This helps to divide a stack top
 * @head: The head of a stack
 * @counter: to aid iteration
 * Return: Nothing
*/
void f_div(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	p = *head;
	if (p->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ken = p->next->n / p->n;
	p->next->n = ken;
	*head = p->next;
	free(p);
}
