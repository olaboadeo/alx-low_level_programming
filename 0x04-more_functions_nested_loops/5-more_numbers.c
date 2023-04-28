#include "main.h"

/**
  *more_numbers - prints all the digits 10 times
  */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 2; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a != 1 || !(b >= 5))
			{
				if (a == 1)
				{
					_putchar(a + 48);
				}
				_putchar(b + 48);
			}
		}
	}
	_putchar('\n');
}
