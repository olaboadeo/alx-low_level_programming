#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a given index of the list
 * @h: pointer to the list
 * @idx: index of where node should be inserted
 * @n: data of the new node
 *
 * Return: address of new node, NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *head;
	unsigned int count = 0;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	head = *h;

	if (head == NULL)
		return (NULL);

	while (head->prev)
		head = head->prev;

	while ((count != idx) && (head))
	{
		head = head->next;
		count++;
	}
	if (count == idx)
	{
		tmp->prev = head->prev;
		tmp->next = head;
		head->prev = tmp;
		tmp->prev->next = tmp;
		return (tmp);
	}
	else
		return (NULL);
}
