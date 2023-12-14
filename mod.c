#include "monty.h"
/**
 * f_mod - This helps to compute the rest top element
 * @head: The head of the stack
 * @counter: The line number
 * Return: nothing
*/
void f_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
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
	ken = p->next->n % p->n;
	p->next->n = ken;
	*head = p->next;
	free(p);
}

