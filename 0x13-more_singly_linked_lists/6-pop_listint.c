#include <stdlib.h>
#include "lists.h"

/**
  *pop_listint - pops the head of a list
  *@head: double pointer to head of list
  *
  *Return: head node’s data (n)
  */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

	if (*head == NULL)
		return (0);

	new = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(new);
	return (n);
}
