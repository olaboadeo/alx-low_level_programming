#include <stdlib.h>
#include "main.h"

/**
  *create_file - create a filename
  *@filename: pointer to filename
  *@text_content: pointer to the contents of new file
  *
  *Return: 1 on success
  *	0 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd, check;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content)
	{
		while (text_content[len])
			len++;

		check = write(fd, text_content, len);
		if (check < 1)
			return (-1);
	}
	return (1);
}
