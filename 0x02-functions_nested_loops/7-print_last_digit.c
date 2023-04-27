#include "main.h"

/**
  *print_last_digit - prints the last digit of a number
  *@c: number to be printe
  *Description: a function that prints the last digit of a number
  *Return: the last digit of the number
  */
int print_last_digit(int c)
{
	int last_digit;

	last_digit = c % 10;
	if (last_digit >= 0)
	{
		_putchar(last_digit + 48);
	}
	else
	{
		last_digit = last_digit * -1;
		_putchar(last_digit + 48);
	}
	return (last_digit);
}
