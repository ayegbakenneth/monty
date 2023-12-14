#include "monty.h"
/**
* free_stack - Used to free a linked list
* @head: This is the stack head
*/
void free_stack(stack_t *head)
{
	stack_t *ken;

	ken = head;
	while (head)
	{
		ken = head->next;
		free(head);
		head = ken;
	}
}
