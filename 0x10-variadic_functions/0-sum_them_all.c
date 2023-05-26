#include "variadic_functions.h"
/**
  * sum_them_all - calculates the sum of all its parameters.
  * @n: number of arguments.
  *
  * Return: calculated sum
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int s = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		s += va_arg(valist, int);
	}

	va_end(valist);

	return (s);
}
