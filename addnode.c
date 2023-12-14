#include "monty.h"
/**
 * addnode - this add a node to stack head
 * @head: stack head
 * @n: a new value
 * Return: nothing
*/
void addnode(stack_t **head, int n)
{

	stack_t *node, *ken;

	ken = *head;
	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (ken)
		ken->prev = node;
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	*head = node;
}
