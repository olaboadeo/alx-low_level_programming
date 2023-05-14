#include "main.h"

/**
  *_memset - fills memory with a constant byte
  *@s: memory area to be filled
  *@n: number of bytes in s to be filled
  *@b: constant byte
  *
  *Return: pointer to the memory area
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
