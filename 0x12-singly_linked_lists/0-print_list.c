#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  *print_list - prints all the elements of a list_t list
  *@h: pointer to the first node
  *
  *Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (n);
}
