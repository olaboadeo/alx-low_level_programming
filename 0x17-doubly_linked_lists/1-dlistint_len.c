#include "lists.h"

/**
 * dlistint_len - returnes the no. of elements in dlistint_t
 * @h: pointer to the head of list
 *
 * Return: no. of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	if (h == NULL)
		return (num);

	while (h->prev != NULL)
		h = h->prev;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
