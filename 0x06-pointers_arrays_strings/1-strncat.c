#include "main.h"

/**
  *_strncat - concatenates two strings
  *@dest: destination string
  *@src: source string
  *@n: number of bytes from src
  *Return: concatenated string
  */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int a;
	char *p = dest + n;

	while (dest[l] != '\0')
	{
		l++;
	}

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[l + a] = src[a];
	}
	return (p);
}
