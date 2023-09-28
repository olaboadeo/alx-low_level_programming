#include "main.h"

/**
  *binary_to_uint - converts a binary number to an unsigned int
  *@b: binary number to be converted
  *
  *Return: the converted number on success
  *0 on failure
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i, n;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] == '0')
			n = 0;
		else if (b[i] == '1')
			n = 1;
		else
			return (0);
		num = (num * 2) + n;
	}
	return	(num);
}
