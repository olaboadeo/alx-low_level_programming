#include "main.h"

/**
  *flip_bits - returns the number of bits you would need to flip
  *to get from one number to another
  *@n: first number
  *@m: second number
  *
  *Return: the number of bits you would need to flip
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int x = n ^ m;

	while (x > 0)
	{
		if ((x & 1UL) == 1)
			count++;
		x >>= 1;
	}
	return (count);
}
