#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_listint - prints all the elements of a listint_t list
  * @h: pointer to first node
  *
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t no = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		no++;
	}
	return (no);
}
