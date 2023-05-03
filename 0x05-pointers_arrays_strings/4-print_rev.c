#include "main.h"

/**
  *print_rev - prints a string in reverse
  *@s: string to b printed
  */
void print_rev(char *s)
{
	int i;
	int j = 0;

	while (*(s + j) != '\0')
	{
		j++;
	}

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}

	_putchar('\n');
}
