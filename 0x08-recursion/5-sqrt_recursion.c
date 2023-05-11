#include "main.h"

int find_sqrt(int a, int b);


/**
  *_sqrt_recursion - calculates the natural square root of a number
  *@n: given number
  *
  *Return: the natural square root of a number
  *-1 if n doesnt have a natural square root
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if ((n == 0) || (n == 1))
	{
		return (n);
	}
	else
	{
		return (find_sqrt(n, 1));
	}
}


/**
  *find_sqrt - helper function to recursively find the square root of n
  *@a: same number as n
  *@b: number that iterates from 1 to n
  *
  *Return: the natural square root of n
  *-1 if n does not have a natural square root
  */
int find_sqrt(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (find_sqrt(a, b + 1));
}
