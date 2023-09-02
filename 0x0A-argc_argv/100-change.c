#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *main - prints the minimum number of coins to make change
  *@argc: count of arguments
  *@argv: pointers to argument
  *
  *Return: 0 on success, 1 on failure
  */
int main(int argc, char *argv[])
{
	int change, c25, c10, c5, c2, c;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);
	c25 = change / 25;
	change %= 25;
	c10 = change / 10;
	change %= 10;
	c5 = change / 5;
	change %= 5;
	c2 = change / 2;
	change %= 2;
	c = c25 + c10 + c5 + c2 + change;
	printf("%d\n", c);
	return (0);
}
