#include "monty.h"
/**
 * f_rotl - to reverse stack to the top
 * @head: head of stack
 * @counter: to count lines
 * Return: nothing
 */
void f_rotl(stack_t **head, __attribute((unused)) unsigned int counter)
{
	stack_t *tile = *head, *ken;

	if (*head == NULL || (*head) ->next == NULL)
	{
		return;
	}
	ken = (*head) ->next;
	ken ->prev = NULL;
	while (tile->next != NULL)
	{
		tile = tile->next;
	}
	tile->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tile;
	(*head) = ken;
}
