#include "main.h"

/**
  *print_triangle - prints a triangle
  *@size: size of the triangle
  */
void print_triangle(int size)
{
	int a, b, h;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (h = 0; h < size; h++)
	{
		for (b = size - (h + 1); b > 0; b--)
		{
			_putchar(' ');
		}

		for (a = h + 1; a > 0; a--)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
