#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  *add_node_end -  adds a new node at the end of a list_t list
  *@head: double pointer to first element
  *@str: string element for new node
  *
  *Return: address of the new element, or NULL if failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *new;
	list_t *temp = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[len])
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
