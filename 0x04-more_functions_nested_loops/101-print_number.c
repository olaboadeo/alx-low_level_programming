#include "main.h"

/**
  *print_number - prints an integer
  *@n: integer to be printed
  */
void print_number(int n)
{
	int a = n;
	int b = 0;
	int c;
	int d = 1;

	while (a > 1)
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
		a = n / c;
		n = n - (a * c);
		_putchar(a + 48);
	}
}
