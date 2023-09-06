#include "main.h"
#include <stdlib.h>

/**
  *str_concat - concatenates two strings
  *@s1: first string
  *@s2: second string
  *
  *Return: pointer to new string
  *NULL on failure
  */
char *str_concat(char *s1, char *s2)
{
	int l1 = 0;
	int l2 = 0;
	int i, j;
	char *str;

	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	str = malloc((l1 * sizeof(char)) + (sizeof(char) * l2) + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i <= l1; i++)
		str[i] = s1[i];

	for (j = 0; j <= l1 + l2; j++)
		str[l1 + j] = s2[j];

	str[l1 + l2] = '\0';
	return (str);
}
