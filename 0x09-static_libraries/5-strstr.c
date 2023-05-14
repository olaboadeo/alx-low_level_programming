#include "main.h"

/**
  *_strstr - locates a substring
  *@haystack: string to be searched
  *@needle: string to be searched for
  *
  *Return: the first occurrence of the substring needle
  *NULL if the substring is not found
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j, x;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				for (x = 0; needle[x] != '\0'; x++)
				{
					if (haystack[i + x] != needle[x])
					{
						break;
					}
				}

				if (!needle[x])
				{
					return (haystack + i);
				}
			}
		}
	}
	return ('\0');
}
