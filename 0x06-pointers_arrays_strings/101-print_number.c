#include "main.h"

/**
  *print_number -  prints an integer
  *@n - integer to be printed
  */
void print_number(int n)
{
	int a, d;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	a = n;
	d = 1;

	while (a / 10 > 10)
	{
		d = d * 10;
	}

	for (; d > 0; d /= 10)
	{
		a = n / d;
		_putchar(a + 48);
		n = n - (a * d);
	}
}	
