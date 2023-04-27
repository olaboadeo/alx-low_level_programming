#include "main.h"

/**
  *print_alphabet_x10 - prints the alphabet twice
  *
  *Return: void
  */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
