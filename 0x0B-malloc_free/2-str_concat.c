#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * str_concat - concatenates two strings
  * @s1: first string
  * @s2: second string
  *
  * Return: NULL on failure or if strings are empty
  * pointer to new string otherwise
  */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i, j;
	int l1 = 0;
	int l2 = 0;

	while (s1[l1] != '\0')
	{
		l1++;
	}

	while (s2[l2] != '\0')
	{
		l2++;
	}

	arr = malloc(l1 + l2 + 1);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < l1; i++)
	{
		arr[i] = s1[i];
	}

	for (j = l1; j < (l1 + l2); j++)
	{
		arr[j] = s2[j - l1];
	}
	arr[l1 + l2 + 1] = NULL;
	return (arr);
}

