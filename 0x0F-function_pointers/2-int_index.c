#include <stdio.h>
#include "function_pointers.h"

/**
  *int_index -  function that searches for an integer
  *@array: array to be searched through
  *@size: size of array
  *@cmp: pointer to function to compare numbers
  *
  *Return: index on success, -1 on failure
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j = size;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < j; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
