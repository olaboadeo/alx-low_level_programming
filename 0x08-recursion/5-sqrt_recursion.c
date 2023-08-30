#include "main.h"

int natroot(int x, int y);

/**
  *_sqrt_recursion - returns the natural square root of a number
  *@n: number to be squared
  *
  *Return: -1 if there is no natural root
  *otherwise the natural square root of a number
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (natroot(n, 0));
}

/**
  *natroot - finds the natural root of a number
  *@x: number to be squared
  *@y: iterator
  *
  *Return: -1 if there is no natural root
  *otherwise the natural square root of a number
  */
int natroot(int x, int y)
{
	if (y * y == x)
		return (y);
	if (y * y > x)
		return (-1);
	return (natroot(x, y + 1));
}
