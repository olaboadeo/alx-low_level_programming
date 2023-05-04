#include "main.h"

/**
  *_strcat - concatenates two strings
  *@dest: destination string
  *@src: source string
  *
  *Return: concatenated string
  */
char *_strcat(char *dest, char *src)
{
	int l = 0;
	int a;
	char *p = dest;

	while (dest[l] != '\0')
	{
		l++;
	}

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[l + a] = src[a];
	}
	return (p);
}
