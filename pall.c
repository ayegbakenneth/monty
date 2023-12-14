#include "monty.h"
/**
 * f_pall - function to print a stack
 * @head: head of stack
 * @counter: to aid in iteration
 * Return: nothing
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *p;
	(void)counter;

	p = *head;
	if (p == NULL)
		return;
	while (p)
	{
		printf("%d\n", p->n);
		p = p->next;
	}
}
