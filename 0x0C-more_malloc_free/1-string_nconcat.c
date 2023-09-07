#include "main.h"
#include <stdlib.h>

/**
 *_strlen - returns the length of a string
 *@s : string to be checked
 *Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
  *string_nconcat - concatenates two strings
  *@s1: first string
  *@s2: second string
  *@n: number of bytes to be copied from s2
  *
  *Return: pointer to concatenated string on success
  *NULL on faiure
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	if (n >= l2)
		n = l2;

	str = malloc(l1 + n + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (i = 0; i <= n; i++)
		str[l1 + i] = s2[i];

	str[l1 + n + 1] = '\0';
	return (str);
}
