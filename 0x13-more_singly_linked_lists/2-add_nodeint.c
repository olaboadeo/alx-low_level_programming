#include <stdlib.h>
#include "lists.h"

/**
  *add_nodeint - adds a node to the beginning of the list
  *@head: double pointer to first node
  *@n: data in new node
  *
  *Return: the address of the new element
  *NULL on failure
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
