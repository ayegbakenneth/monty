#include "monty.h"
/**
 * f_pchar - This is to print char the stack top
 * @head: Head of stack
 * @counter: for line number
 * Return: nothing
*/
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *p;

	p = *head;
	if (!p)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (p->n > 127 || p->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", p->n);
}
