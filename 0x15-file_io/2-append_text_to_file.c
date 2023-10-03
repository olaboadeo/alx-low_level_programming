#include <stdlib.h>
#include "main.h"

/**
  *append_text_to_file - appends text at the end of a file
  *@filename: pointer to the file
  *@text_content: text to be added to end of file
  *
  *Return: 1 on success, -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, check, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_EXCL | O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

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
