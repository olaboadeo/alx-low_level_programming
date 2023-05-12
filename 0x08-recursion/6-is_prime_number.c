#include "main.h"

int helper(int a, int b);

/**
  *is_prime_number - checks if a number is a prime number
  *@n: given number
  *
  *Return: 1 if n is a prime number
  *0 if n is not a prime number
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helper(n, 2));
	}
}


/**
  *helper - helper function
  *@a: equal to the given number
  *@b: iterates between 2 to n
  *
  *Return: 1 if n is a prime number
  *0 if n is not a prime number
  */
int helper(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	else
	{
		return (helper(a, b + 1));
	}
}
