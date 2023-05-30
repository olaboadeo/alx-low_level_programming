#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * create_array - creates an array of chars
  * @size: size of the array
  * @c: character the array is to be initilaized with
  *
  * Return: NULL if size = 0 or if it fails, otherwise a pointer to the array
  */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}

	str = malloc(size);
	if (str == NULL)
	{
		return ('\0');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
	}
	return (str);
}
