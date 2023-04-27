#include <stdio.h>

/**
 *main - entry point
 *
 *Return: always 0
 */
int main(void)
{
	int a = 97, b = 65;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	while (b <= 90)
	{
		putchar(b);
		b++;
	}

	putchar('\n');
	return (0);
}
