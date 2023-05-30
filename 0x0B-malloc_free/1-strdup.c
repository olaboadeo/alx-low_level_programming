#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _strdup - returns a pointer to a new string
  * @str: string to be copied
  *
  * Return: NULL if str = NULL or on failure, pointer if otherwise
  */
char *_strdup(char *str)
{
	char *arr;
	int i;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	arr = malloc(sizeof(char) * (len + 1));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		arr[i] = str[i];
	}

	return (arr);
}
