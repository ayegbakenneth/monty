#include "monty.h"
/**
 * f_pstr -  Function that prints a string from
 * stack top
 * @head: The head of the stack
 * @counter: for the line number
 * Return: nothing
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *p;
	(void)counter;

	p = *head;
	while (p)
	{
		if (p->n > 127 || p->n <= 0)
		{
			break;
		}
		printf("%c", p->n);
		p = p->next;
	}
	printf("\n");
}
