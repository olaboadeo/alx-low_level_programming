#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * main - Prints the result of simple operations.
  * @argc: The number of arguments supplied to the program.
  * @argv: An array of pointers to the arguments.
  *
  * Return: Always 0.
  */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error1\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error2\n");
		exit(100);
	}

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error3\n");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
