#include <stdlib.h>
#include "lists.h"

/**
  *list_len - returns the number of elements
  *@h: pointer to first node
  *
  *Return: number of elements in list
  */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
