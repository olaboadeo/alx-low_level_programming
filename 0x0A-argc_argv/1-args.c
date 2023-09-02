#include <stdio.h>
#include "main.h"

/**
  *main - prints the number of argumemts
  *@argc: count of arguments
  *@argv: pointer to arguments
  *
  *Return: Always 0
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
