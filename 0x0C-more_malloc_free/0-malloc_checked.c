#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
  * malloc_checked -  allocates memory using malloc
  * @b: Value passed in to the function
  *Return: null
  */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
