#include <stdio.h>

/**
  *main - entry point
  *Return: always 0
  */
int main(void)
{
	long int n = 612852475143;
	long int factor = 2;
	long int larg_factor = 1;

	while (n > 1)
	{
		if (n % factor == 0)
		{
			larg_factor = factor;
			n = n / factor;
		}
		else
		{
			factor++;
		}
	}

	printf("%ld\n", larg_factor);
	return (0);
}
