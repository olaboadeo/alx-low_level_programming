#include "main.h"

int _strlen_recursion(char *s);
int checkstr(char *s, int x, int l);

/**
  *is_palindrome - checks if a string is a palindrome
  *@s: given string
  *
  *Return: 1 if input string is a palindrome
  *0 if otherwise
  */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len == 1)
		return (1);
	return (checkstr(s, 0, len));
}

/**
  *_strlen_recursion - returns the length of a string
  *@s: string pointer
  *
  *Return: length of string
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
  *checkstr - checks if a string is a palindrome
  *@s: given string
  *@x: iterator
  *@l: length of string
  *
  *Return: 1 if input string is a palindrome
  *0 if otherwise
  */
int checkstr(char *s, int x, int l)
{
	if (*(s + x) != *(s + l - 1))
		return (0);
	if (x >= l)
		return (1);
	return (checkstr(s, x + 1,  l - 1));
}
