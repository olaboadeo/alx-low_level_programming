#include "main.h"

int find_sqrt(int n, int start, int end);


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
		return (find_sqrt(n, 1, n));
	}
}


/**
  *find_sqrt - helper function to recursively find the square root of n
  *@n: the number to find the square root of
  *@start: the starting value for the binary search
  *@end: the ending value for the binary search
  *
  *Return: the natural square root of n
  *-1 if n does not have a natural square root
  */
int find_sqrt(int n, int start, int end)
{
	int mid = (start + end) / 2;
	int mid_squared = mid * mid;

	if (start > end)
	{
		return (-1);
	}

	if (mid_squared == n)
	{
		return (mid);
	}
	else if (mid_squared < n)
	{
		return (find_sqrt(n, mid + 1, end));
	}
	else
	{
		return (find_sqrt(n, start, mid - 1));
	}
}

