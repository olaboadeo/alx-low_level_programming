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
	char *arr = NULL;
	int i, j;
	int l1 = 0;
	int l2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[l1] != '\0')
	{
		l1++;
	}

	while (s2[l2] != '\0')
	{
		l2++;
	}

	arr = malloc((l1 + l2) * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		arr[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		arr[j + i] = s2[j];
	}

	return (arr);
}
