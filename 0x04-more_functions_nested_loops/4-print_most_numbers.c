#include "main.h"

/**
  *print_most_numbers - prints all digits, except 2 and 4
  */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if (a != 52 && a != 50)
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
