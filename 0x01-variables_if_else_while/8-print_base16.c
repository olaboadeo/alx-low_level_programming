#include <stdio.h>

/**
  *main - entry point
  *
  *Return: always 0
  */
int main(void)
{
	int a;

	for (a = 0x00; a < 0x10; a++)
	{
		a = a % 0x10;
		if (a < 0x0a)
		{
			putchar(a + 48);
		}
		else
		{
			putchar(a + 87);
		}
	}
	putchar('\n');
	return (0);
}
