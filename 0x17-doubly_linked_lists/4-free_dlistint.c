#include "lists.h"
/**
 * free_dlistint - frees dlistint_t
 * @head: pointer to the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	if (head)
	{
		while (head->prev)
			head = head->prev;
	}

	node = head;
	while (node)
	{
		head = node->next;
		free(node);
		node = head;
	}
}
