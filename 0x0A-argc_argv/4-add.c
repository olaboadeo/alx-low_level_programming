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
	int j, q;

	for (j = 1; j < argc; j++)
	{
		for (q = 0; *(argv[j] + q) != '\0'; q++)
		{
			if (!((*(argv[j] + q) < 58) && (*(argv[j] + q) > 47)))
			{
				printf("Error\n");
				return (1);
			}
		}
		i += atoi(argv[j]);
	}
	printf("%d\n", i);
	return (0);
}
