#include "monty.h"
/**
 * f_queue - Used to print the top
 * @head: head of a stack
 * @counter: for number of line
 * Return: nothing
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - node addition to back
 * @n: added values
 * @head: This is the stack head
 * Return: nothing
*/
void addqueue(stack_t **head, int n)
{
	stack_t *node, *ken;

	ken = *head;
	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		printf("Error\n");
	}
	node->n = n;
	node->next = NULL;
	if (ken)
	{
		while (ken->next)
			ken = ken->next;
	}
	if (!ken)
	{
		*head = node;
		node->prev = NULL;
	}
	else
	{
		ken->next = node;
		node->prev = ken;
	}
}
