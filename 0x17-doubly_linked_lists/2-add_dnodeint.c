#include "lists.h"

/**
 * add_dnodeint - adds a new node to the beginning of the list
 * @head: pointer to ther head of the list
 * @n: data element of the new node
 *
 * Return: the address of the new node or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	new->next = h;
	if (h != NULL)
		h->prev = new;

	*head = new;

	return (new);
}
