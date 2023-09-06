#include "main.h"
#include <stdlib.h>

/**
  *argstostr - concatenates all the arguments of your program
  *@ac: count of arguments
  *@av: point to arguments
  *
  *Return: pointer to string on success
  *NULL if ac = 0 or av = NULL
  */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
