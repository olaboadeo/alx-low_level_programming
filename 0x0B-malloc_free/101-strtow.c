#include "main.h"
#include <stdlib.h>

/**
  *countWords - count the words in the given string
  *@str: given string
  *
  *Return: number of words in string
  */
int countWords(const char *str)
{
	int count = 0;
	int inWord = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (!inWord)
			{
				count++;
				inWord = 1;
			}
		}
		else
		{
			inWord = 0;
		}
	}
	return (count);
}

/**
  *strtow - splits a string into words
  *@str: string to be split
  *
  *Return: pointer to array of strings on success
  *NULL if str = NULL or "" or on faiure
  */
char **strtow(char *str)
{
	int i, k = 0, len = 0, words, c = 0, start, end;
	char **matrix, *tmp;

	while (*(str + len))
		len++;
	words = countWords(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;
	return (matrix);
}
