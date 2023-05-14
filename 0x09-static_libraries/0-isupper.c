#include "main.h"

/**
  *_isupper - checks for uppercase character
  *@c: charcter to be checked
  *Description: a function that checks for uppercase character
  *Return: 1 if c is uppercase
  *0 if otherwise
  */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
