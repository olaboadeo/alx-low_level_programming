#include "main.h"

/**
 *_puts_recursion -prints a string, followed by a new line
 *@s: string to be printed
 *
 *Return: the first occurance of the string
 *NULL if the character is not found
 */

void _puts_recursion(char *s)
{
	char c;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	c = *s;
	_putchar(c);
	s++;
	_puts_recursion(s);
}
