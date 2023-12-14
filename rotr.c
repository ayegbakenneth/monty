#include "monty.h"
/**
  *f_rotr- Reversing the stack
  *@head: Head of stack
  *@counter: This aid iteration
  *Return: nothing
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *scent;

	scent = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (scent->next)
	{
		scent = scent->next;
	}
	scent->next = *head;
	scent->prev->next = NULL;
	scent->prev = NULL;
	(*head)->prev = scent;
	(*head) = scent;
}
