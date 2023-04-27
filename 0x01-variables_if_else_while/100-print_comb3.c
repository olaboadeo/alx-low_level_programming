#include <stdio.h>

/**
  *main- entry point
  *
  *Return: always 0
  */
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a < b)
			{
				putchar(a + 48);
				putchar(b + 48);
				if ((a != 8) || (b != 9))
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
