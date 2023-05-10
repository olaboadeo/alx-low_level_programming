#include "main.h"

/**
  *factorial - calculates the factorial of a given number
  *@n: number to be calculated for
  *
  *Return: factorial of the given number
  *-1 to indicate error when n is less than 0
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
