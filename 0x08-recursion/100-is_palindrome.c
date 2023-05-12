#include "main.h"

int helper(char *a, int b, int c);

int helper2(char *h, int a);

/**
  *is_palindrome - checks if a string is a palindrome
  *@s: string to be checked
  *
  *Return: on success, 1
  *on failure, 0
  */
int is_palindrome(char *s)
{
	int len = helper2(s, 0);

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
  *helper2 - calculates the length of a string
  *@h: string given
  *@a: length of string
  *
  *Return: length of string
  */
int helper2(char *h, int a)
{
	if (h[a] != '\0')
	{
		return (helper2(h, a + 1));
	}
	else
	{
		return (a);
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
