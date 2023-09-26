#include <stdlib.h>
#include "lists.h"

/**
  * listint_len - returns the number of elements in a linked listint_t list
  * @h: pointer to the first node
  *
  *Return: number of nodes in the list
  */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t no = 0;

	while (temp != NULL)
	{
		no++;
		temp = temp->next;
	}
	return (no);
}
