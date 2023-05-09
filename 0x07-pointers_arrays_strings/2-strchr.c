#include "main.h"

/**
  *_strchr - locates a character in a string
  *@s: string to be searched
  *@c: character to be found
  *
  *Return: the first occurance of the string
  *NULL if the character is not found
  */
char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

	if (s[i] == '\0')
	{
		return (s + i);
	}

	return ('\0');
}
