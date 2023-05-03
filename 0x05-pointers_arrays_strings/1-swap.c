#include "main.h"

/**
  *swap_int - swaps the value of two integers
  *@a: first integer to be swapped
  *@b: second integer to be swapped
  */
void swap_int(int *a, int *b)
{
	int num1 = *a;
	int num2 = *b;

	*a = num2;
	*b = num1;
}
