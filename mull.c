#include "monty.h"
/**
 * f_mul - Used to multiplies stack elements
 * @head: the stack head
 * @counter: For iteration
 * Return: nothing
*/
void f_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	p = *head;
	ken = p->next->n * p->n;
	p->next->n = ken;
	*head = p->next;
	free(p);
}
