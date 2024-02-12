#include "main.h"

/**
  *_strcpy - copies a string
  *@dest: destination string
  *@src: source string
  *Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int a;
	char *p = dest;

	while (src[l] != '\0')
	{
		l++;
	}

	for (a = 0; a <= l; a++)
	{
		dest[a] = src[a];
	}

	return (p);
}
