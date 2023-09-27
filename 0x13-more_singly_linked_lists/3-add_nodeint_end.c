#include <stdlib.h>
#include "lists.h"

/**
  *add_nodeint_end - adds a new node at the end of a listint_t list
  *@head: double pointer to node
  *@n: data for new node
  *
  *Return: address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
