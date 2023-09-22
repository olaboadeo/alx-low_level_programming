#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * _strlen - returns the length of a string
  * @s: string
  * Return: length
  */
int _strlen(const char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}

/**
  *add_node - adds a new node at the beginning of a list_t list
  *@head: pointer to first node
  *@str: string to be added to the node
  *
  *Return: address of new node, null if failed
 */ 
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	return (new);
}
