#include "main.h"

int checknum(int x, int y);
/**
  *is_prime_number - checks if a given number is a prime number
  *@n: given number
  *
  *Return: 1 if the given number is a prime number
  *0 if otherwise
  */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (checknum(n, 2));
}

/**
  *checknum - checks if a given number is a prime number
  *@x: given number
  *@y: iterator
  *
  *Return: 1 if the given number is a prime number
  *0 if otherwise
  */
int checknum(int x, int y)
{
	if (x == y)
		return (1);
	if (x % y == 0)
		return (0);
	return (checknum(x, y + 1));
}
