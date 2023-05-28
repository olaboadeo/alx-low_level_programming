#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the minimum number of coins to make change for an amount
  * @argc: number of arguments
  * @argv: list of arguments
  *
  * Return: 1 if argc is not 1, otherwise 0
  */
int main(int argc, char *argv[])
{
	int change = 0;
	int amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	change += (amount / 25);
	amount = amount % 25;
	change += (amount / 10);
	amount = amount % 10;
	change += (amount / 5);
	amount = amount % 5;
	change += (amount / 2);
	amount = amount % 2;
	change += (amount / 1);
	printf("%d\n", change);
	return (0);
}
