#include "main.h"

/**
 * read_textfile - opens a file in O_WRONLY
 * reads what is in the file for a specified amount on bytes
 * prints what is read to STDOUT_FILENO (1)
 *
 * @filename: the file that we will read
 * @letters: size of buffer to read
 *
 * Return: number of letters read and printed
 * Otherwise 0 if:
 * file cannon be opened or read
 * filename is NULL
 * write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	r = read(fd, buff, letters);
	w = write(1, buff, r);

	if (fd == -1 || r == -1 || w == -1 || w != r)
	{
		free(buff);
		return (0);
	}
	else
	{
		free(buff);
		close(fd);
		return (w);
	}
}
