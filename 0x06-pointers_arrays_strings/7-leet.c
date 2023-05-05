#include "main.h"

/**
  *leet - encodes a string into 1337
  *@str: string to be encoded
  *
  *Return: encoded string
  */
char *leet(char *str)
{
	char leet[] = "AEOTLaeotl";
	char code[] = "4307143071";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (str[i] == leet[j])
			{
				str[i] = code[j];
			}
		}
	}
	return (str);
}
