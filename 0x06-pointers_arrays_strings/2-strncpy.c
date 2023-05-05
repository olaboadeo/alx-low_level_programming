#include "main.h"

/**
  *_strncpy - copies a string
  *@dest: destination string
  *@src: source string
  *@n: number of bytes from src
  *Return: copied string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int l = 0;
	int a;
	char *p = dest;

	while (src[l] != '\0')
	{
		l++;
	}

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (p);
}
