#include <stdio.h>


/**
  * main - Prints the number of arguments passed into main
  * @argc: Number of command line arguments
  * @argv: Name of arguments
  * Return: 0
  */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", (argc - 1));
	}
	else
	{
		argv++;
	}
	return (0);
}
