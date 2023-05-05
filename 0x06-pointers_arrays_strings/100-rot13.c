#include "main.h"

/**
  *rot13 - encodes a string into rot13
  *@str: string to be encoded
  *
  *Return: encoded string
  */
char *rot13(char *str)
{
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char code[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; rot13[j] != '\0'; j++)
		{
			if (str[i] == rot13[j])
			{
				str[i] = code[j];
			}
		}
	}
	return (str);
}
