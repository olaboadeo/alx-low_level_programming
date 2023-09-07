#include <stdlib.h>
#include "main.h"

/**
  *malloc_checked - allocates memory using malloc
  *@b: amount of memory to be allocated
  *
  *Return: pointer on success, status value of 98 on failure
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
