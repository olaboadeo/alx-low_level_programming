#include "main.h"
#include <stdlib.h>

/**
  *_realloc - reallocates a memory block using malloc and free
  *@ptr: pointer to the memory previously allocated
  *@old_size: the size, in bytes, of the allocated space for ptr
  *@new_size: the new size, in bytes of the new memory block
  *
  *Return: NULL on failure, pointer on success
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
		return (NULL);
	if (ptr == NULL)
		return (malloc(new_size));

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			*((char *)new_ptr + i) = *((char *)ptr + i);
	}
	else
	{
		for (i = 0; i < new_size; i++)
			*((char *)new_ptr + i) = *((char *)ptr + i);
	}

	free(ptr);
	return (new_ptr);
}
