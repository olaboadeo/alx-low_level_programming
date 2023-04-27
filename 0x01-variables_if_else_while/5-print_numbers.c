#include <stdio.h>

/**
  *main - entry point
  *
  *Return: always 0
  */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		a = a % 10;
		putchar(a + 48);
		a++;
	}
	putchar('\n');
	return (0);
}
