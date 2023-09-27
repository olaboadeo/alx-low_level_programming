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
	listint_t *current, *prev, *new;
	unsigned int count = 0;

	current = *head;
	while ((idx != count) && (current != NULL))
	{
		prev = current;
		count++;
		current = current->next;
	}

	if (count < idx)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = current;
	prev->next = new;
	return (new);
}
