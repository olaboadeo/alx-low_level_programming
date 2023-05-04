#include "main.h"

/**
  *puts_half - prints half of a string
  *@str: string to b printed
  */
void puts_half(char *str)
{
	int n = 0;
	int a;

	while (str[n] != '\0')
	{
		n++;
	}

	if (n % 2 == 1)
	{
		a = (n - 1) / 2;
	}
	else
	{
		a = n / 2;
	}

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
