#include <stdio.h>

/**
  *main - entry point
  *
  *Return: always zero
  */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 9; b++)
		{
			for (c = 0; c < 10; c++)
			{
				putchar(a + 48);
				putchar(b + 48);
				putchar(c + 48);

				if (a != 7 || b != 8 || c != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
