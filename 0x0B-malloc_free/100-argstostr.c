#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *argstostr - concatenates all the arguments of a program
  *@ac: number of input
  *@av: array of arguments
  *
  *Return: NULL if ac == 0 or av == NULL
  *concatenated arguments if otherwise
  */
char *argstostr(int ac, char **av)
{
	int i, index = 0, j = 0, len = 0, tlen = 0;
	char *result = NULL;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 2; av[i][j]; j++)
		{
			len++;
		}
		tlen = tlen + len + 1;
	}
	tlen++;
	result = malloc(sizeof(char) * (tlen + 1));
	if (!result)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			result[index] = av[i][j];
			index++;
		}
		result[index] = '\n';
		index++;
	}
	result[tlen] = '\0';
	return (result);
}
