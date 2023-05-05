#include "main.h"

/**
  *string_toupper - changes all lowercase letters of a string to uppercase
  *@str: string to be changed
  *
  *Return: corrected string
  */
char *string_toupper(char *str)
{
	int l = 0;
	int a;

	while (str[l] != '\0')
	{
		l++;
	}

	for (a = 0; a < l; a++)
	{
		if (str[a] < 123 && str[a] > 96)
		{
			str[a] = str[a] - 32;
		}
	}
	return (str);
}
