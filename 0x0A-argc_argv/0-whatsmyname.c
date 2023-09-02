#include <stdio.h>
#include "main.h"

/**
  *main - program that prints programs name
  *@argv: array to pointers
  *@argc: count of arguments
  *
  *Return: 0
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
