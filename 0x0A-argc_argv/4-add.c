#include <stdio.h>
#include "main.h"

/**
  * _atoi - converts a string to an integer
  * @s: string to be converted
  *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);
	return (n);
}

/**
 * _isdigit - checks for a digit (0 through 9)
 *@s: character to be checked
 *Description: a function that checks for a digit
 *Return: 1 if c is a digit
 *0 if otherwise
 */
int _isdigit(char *s)
{
	while (*s)
	{
		if (!(*s > 47 && *s < 58))
		{
			return (0);
		}
		s++;
	}
	return (1);
}


/**
  *main - adds positive numbers
  *@argc: count of arguments
  *@argv: pointer of arguments
  *
  *Return: 0 on success, 1 if otherwise
  */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	while (i < argc)
	{
		if (_isdigit(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + _atoi(argv[i]);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
