#include <stdlib.h>
#include "lists.h"

/**
  *sum_listint- adds all the data in listint_t linked list
  *@head: pointer to head node
  *
  *Return: sum of data on success
  *0 if list is empty
  */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);

	current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
