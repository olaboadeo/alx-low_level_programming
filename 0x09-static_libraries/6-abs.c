#include "main.h"

/**
  *_abs - computes the absolute value of an integer
  *@c: number to be computed
  *Description: function that computes the absolute value of an integer
  *Return: the absolute value of the intger
  */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		c = c * -1;
		return (c);
	}
}
