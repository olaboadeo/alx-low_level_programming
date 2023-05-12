#include "main.h"

int helper(char *a, int b, int c);

/**
  *is_palindrome - checks if a string is a palindrome
  *@s: string to be checked
  *
  *Return: on success, 1
  *on failure, 0
  */
int is_palindrome(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	if (len == 0)
	{
		return (1);
	}
	else
	{
		return (helper(s, len - 1, 0));
	}
}

/**
  *helper - helpr function
  *@a: given string
  *@b: length of string
  *@c: iterated from 0 to half of string length
  *
  *Return: on success, 1
  *on failure, 0
  */
int helper(char *a, int b, int c)
{
	if (b >= c)
	{
		if (a[c] == a[b])
		{
			return (helper(a, b - 1, c + 1));
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (1);
	}
}
