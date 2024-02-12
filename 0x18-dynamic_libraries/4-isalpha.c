#include "main.h"

/**
  *_isalpha - checks for alphabetic character
  * @c: character to be checked
  *Description: checks if input is an alphabet character
  *Return: 1 if c is a letter
  * 0 if other wise
  */
int _isalpha(int c)
{
	if ((c < 91 && c > 64) || (c < 123 && c > 96))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
