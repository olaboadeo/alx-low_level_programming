#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array, using malloc
  *@nmemb: number of elements
  *@size: size of each element
  *
  *Return: NULL on failure
  *pointer to the allocated memory, on success
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size * nmemb; i++)
		*((char *)ptr + i) = 0;
	return (ptr);
}
