#include "main.h"

/**
  *cap_string - capitalizes all words of a string
  *@str: string to be capitalized
  *
  *Return: capitalized string
  */
char *cap_string(char *str)
{
	int l = 0;
	int a;

	while (str[l] != '\0')
	{
		l++;
	}

	for (a = 0; a < l; a++)
	{
		if ((a == 0) && (str[a] < 123) && (str[a] > 96))
		{
			str[a] = str[a] - 32;
		}

		if ((str[a + 1] < 123) && (str[a + 1] > 96))
		{
			if ((str[a] == '\n') || (str[a] == '\t') || (str[a] == ' '))
			{
				str[a + 1] = str[a + 1] - 32;
			}

			if ((str[a] == '!') || (str[a] == '?') || (str[a] == '"'))
			{
				str[a + 1] = str[a + 1] - 32;
			}

			if ((str[a] == '.') || (str[a] == 125))
			{
				str[a + 1] = str[a + 1] - 32;
			}

			if ((str[a] == 40) || (str[a] == 41) || (str[a] == 123))
			{
				str[a + 1] = str[a + 1] - 32;
			}
		}
	}
	return (str);
}
