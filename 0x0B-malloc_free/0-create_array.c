#include "main.h"
#include <stdlib.h>

/**
  *create_array - creates an array of chars
  *@size: size of array
  *@c: initilizing character
  *
  *Return: pointer to the array on success
  *NULL if size = 0 or on failure
  */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(char));
	if (*str == '\0')
		return (NULL);
	
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
