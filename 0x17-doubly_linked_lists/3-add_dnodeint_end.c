#include "lists.h"
/**
 * add_dnodeint_end - adds a node to the end of dlistint_t
 * @head: pointer to the list
 * @n: data to be added to the end of the list
 *
 * Return: pointer to the new node or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	h = *head;
	while (h->next)
		h = h->next;

	h->next = new;
	new->prev = h;
	return (new);
}
