#include <stdio.h>
#include <stdlib.h>

/**
  * main - a program that adds positive numbers
  * @argc: number of arguments
  * @argv: list of arguments
  *
  * Return: 0 on successful operation, 1 on error
  */
int main(int argc, char *argv[])
{
	int i = 0;
	int j;

	for (j = 1; j < argc; j++)
	{
		if ((*argv[j] < 58) && (*argv[j] > 47))
		{
			i += atoi(argv[j]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", i);
	return (0);
}
