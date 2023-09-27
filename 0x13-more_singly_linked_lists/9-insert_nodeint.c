#include <stdlib.h>
#include "lists.h"

/**
  *insert_nodeint_at_index - add a new node at the given index
  *@head: double header to head node
  *@idx: index node
  *@n: data of new node
  *
  *Return: pointer to new node on success
  *NULL on failure
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	current = *head;
	if (idx == 0)
	{
		new->next = current;
		*head = new;
		return (new);
	}

	while (current != NULL)
	{
		if (count == idx - 1)
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}
		current = current->next;
		count++;
	}

	free(new);
	return (NULL);
}
