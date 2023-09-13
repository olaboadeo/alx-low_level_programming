#include <stdio.h>
#include "function_pointers.h"

/**
  *array_iterator - executes a function through an array
  *@array: array to be iterated through
  *@size: size of the array
  *@action: pointer to the function
  *
  *Return: Nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, j = size;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < j; i++)
		action(array[i]);
}
