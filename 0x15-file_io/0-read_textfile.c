#include "main.h"

/**
 * read_textfile - reads a file and prints the content to STDOUT_FILENO
 * @filename: the file to be read
 * @letters: the number of letters to be read from the file
 * Return: the number of letters that were able to be read
 * 	   0 if the file could not be opened or read
 * 	   0 if filename is NULL
 * 	   0 if write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count1, count2;
	char *buff = malloc(sizeof(char) * BUFF);

	if (filename == NULL)
	{
		free(buff);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buff);
		return (0);
	}

	count1 = read(fd, buff, letters);
	if (count1 < 1)
	{
		free(buff);
		return (0);
	}

	count2 = write(1, buff, count1);
	if (count2 < 1)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(fd);

	return (count2);
}
