#include <stdlib.h>
#include "main.h"

/**
  *read_textfile - reads a text file and prints it to the stdout
  *@filename: pointer to text file
  *@letters: number of letters it should read
  *
  *Return: the actual number of letters it could read and print
  *0 if the file can not be opened or read or if NULL
  *0 if write fails
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, wcheck, rcheck;
	char *str;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);

	rcheck = read(fd, str, letters);
	wcheck = write(STDOUT_FILENO, str, rcheck);

	free(str);
	close(fd);
	return (wcheck);
}
