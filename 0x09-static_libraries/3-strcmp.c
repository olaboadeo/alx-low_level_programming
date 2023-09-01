#include "main.h"

/**
  *_strcmp - compare two strings
  *@s1: first string
  *@s2: second string
  *
  *Return: 0 if the same
  *<0 if s1 < s2
  *>0 if s1 > s2
  */
int _strcmp(char *s1, char *s2)
{
	int a, p;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		if (s1[a] - s2[a] == 0)
		{
			p = 0;
		}
		else
		{
			p = s1[a] - s2[a];
			return (p);
		}
	}
	return (0);
}
