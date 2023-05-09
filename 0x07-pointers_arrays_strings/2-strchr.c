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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	if (s[i] == '\0')
	{
		return (s + i);
	}

	return ('\0');
}
