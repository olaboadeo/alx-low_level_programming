#include "main.h"

/**
  *print_number - prints an integer
  *@n: integer to be printed
  */
void print_number(int n)
{
	int a;
	int b = 0;
	int c, g;
	int d = 1;

	if (n < 0)
	{
		a = -n;
		_putchar('-');
	}
	else
	{
		a = n;
	}

	g = a;

	while (a >= 1)
	{
		b++;
		a = a / 10;
	}

	while (b > 1)
	{
		d = d * 10;
		b--;
	}

	for (c = d; c >= 1; c /= 10)
	{
		a = g / c;
		g = g % c;
		_putchar(a + 48);
	}
}
