#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node of dlistint_t
 * @head: pointer to the list
 * @index: node to be gotten
 *
 * Return: nth node or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head->prev)
			head = head->prev;

		while ((count != index) && (head->next))
		{
			head = head->next;
			count++;
		}

		if (count == index)
			return (head);
		else
			return (NULL);
	}
	return (NULL);
}

