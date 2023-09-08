#include "main.h"
#include <stdlib.h>

/**
  *array_range - creates an array of integers
  *@min: minimum value
  *@max: maximum value
  *
  *Return: pointer to the newly created array on success
  *NULL on failure
  */
int *array_range(int min, int max)
{
	int *ptr;
	int i, k = 0;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		ptr[k++] = i;

	return (ptr);
}
