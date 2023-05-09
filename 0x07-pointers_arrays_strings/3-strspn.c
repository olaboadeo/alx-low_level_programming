#include "main.h"

/**
  *_strspn - gets the length of a prefix substring
  *@s: initial segment
  *@accept: bytes
  *
  *Return: number of bytes in s
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				i++;
				break;
			}
		}
		if (!accept[y])
		{
			break;
		}

	}
	return (i);
}
