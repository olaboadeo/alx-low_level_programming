#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node_end - adds a node at end of linked list
  * @head: double pointer to the first node of a list
  * @str: address of string to be put in the new node
  *
  * Return: NULL on failure, address of new node if otherwise
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newlist;
	list_t *temp = *head;
	unsigned int l = 0;

	while (str[l])
	{
		l++;
	}

	newlist = malloc(sizeof(list_t));

	if (!newlist)
	{
		return (NULL);
	}

	newlist->str = strdup(str);
	newlist->len = l;
	newlist->next = NULL;

	if (*head == NULL)
	{
		*head = newlist;
		return (newlist);
	}

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = newlist;
	return (newlist);
}
