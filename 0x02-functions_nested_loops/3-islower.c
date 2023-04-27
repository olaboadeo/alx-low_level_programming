#include "main.h"

/**
  *_islower - checks for lowercase characters
  * @c: the character to check
  *Description: This function checks if the parameter is a lowercase
  *character
  *Return: 1 if parameter is lowercase, 0 if otherwise
  */
int _islower(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
