#include "main.h"

/**
  *_puts - prints a string
  *@str: string to be printed
  */
void _puts(char *str)
{
	char c;

	while (*str != '\0')
	{
		c = *str;
		_putchar(c);
		str++;
	}
	_putchar('\n');
}
