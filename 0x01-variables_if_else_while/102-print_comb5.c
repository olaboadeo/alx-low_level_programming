#include <stdio.h>

/**
  *main - entry point
  *
  *Return: always 0
  */
int main(void)
{
	int a, b, c, d, e, f;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 9; b++)
		{
			e = (10 * a) + b;
			for (c = 0; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					f = (10 * c) + d;
					if (e < f)
					{
						putchar(a + 48);
						putchar(b + 48);
						putchar(' ');
						putchar(c + 48);
						putchar(d + 48);
						if (e != 98 || f != 99)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
