#include <stdlib.h>
#include "lists.h"

/**
  *get_nodeint_at_index - returns the nth node of a listint_t linked list
  *@head: pointer to head node
  *@index: index of the node
  *
  *Return: data stored at index node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		else
		{
			current = current->next;
			count++;
		}
	}
	return (NULL);
}
