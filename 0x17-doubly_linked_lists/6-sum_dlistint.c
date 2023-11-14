#include "lists.h"

/**
 * sum_dlistint - adds all the data in dlistint_t
 * @head: pointer to the list
 *
 * Return: sum of all data values in list or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head->prev)
			head = head->prev;

		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
