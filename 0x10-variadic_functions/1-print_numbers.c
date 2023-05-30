#include "variadic_functions.h"

/**
  * print_numbers - function that prints numbers
  * @separator: string to be printed between numbers.
  * @n: number of integers
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(valist, int);
		char num_str[10];
		int j = 0;

		if (num == 0)
		{
			_putchar('0');
			continue;
		}

		if (num < 0)
		{
			_putchar('-');
			num *= -1;
		}

		while (num > 0)
		{
			num_str[j++] = (num % 10) + '0';
			num /= 10;
		}

		while (j > 0)
		{
			_putchar(num_str[--j]);
		}

		if (separator && i < n - 1)
		{
			int k;
			for (k = 0; separator[k] != '\0'; k++)
			{
				_putchar(separator[k]);
			}
		}
	}
	_putchar('\n');
	va_end(valist);
}
