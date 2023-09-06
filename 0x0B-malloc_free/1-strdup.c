#include "main.h"
#include <stdlib.h>

/**
  *_strdup - copies a string to a newly allocated space
  *@str: pointer to string
  *
  *Return: pointer to a new string on success
  *NULL on failure or if str = NULL
  */
char *_strdup(char *str)
{
	char *s;
	int len = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	s = malloc(len * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		s[i] = str[i];
	return (s);
}
