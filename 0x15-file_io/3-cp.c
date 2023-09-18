#include "main.h"

void close_file(int fd);

/**
 * main - copies the contents of one file to another
 * @file_from: file we are copying
 * @file_to: file to copy to
 *
 * if number of arguments are not correct:
 * 	write to STDERR - Usage: cp file_from file_to
 * 	exit (97)
 * 
 * if file_from does not exist
 * if file_from cannot be read
 * 	write to STDERR - Error: Can't read from file NAME_OF_THE_FILE
 * 	exit (98)
 *
 * if cannot write to file_to
 * if cannot create file_to
 * 	write to STDERR - Error: Can't write to NAME_OF_THE_FILE
 * 	exit (99)
 *
 * if cannot close fd
 * 	write to STDERR - Error: Can't close fd FD_VALUE
 * 	exit (100)
 *
 * if file_to exists O_TRUNC
 *
 * permissions of the created file: 0664
 *
 * You must read 1,024 bytes at a time from the file_from to make less system
 * calls. Use a buffer
 *
 * Return: Always success
 */

int main(int argc, char *argv[])
{
	int oFrom, oTo, rFrom, wTo;
	char *buff;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit (97);
	}

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit (99);
	}

	oFrom = open(argv[1], O_RDONLY);
	rFrom = read(oFrom, buff, 1024);

	oTo = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY | 0664);

	do
	{
		if (oFrom == -1 || rFrom == -1)
		{
			dprintf(2, "Can't read from %s\n", argv[1]);
			exit (98);
		}

		wTo = write(oTo, buff, 1024);
		if (oTo == -1 || wTo == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit (99);
		}

		rFrom = read(oFrom, buff, 1024);
		oTo = open(argv[2], O_WRONLY | O_APPEND);
	} while (rFrom > 0);

	free (buffer);
	close_file(oFrom);
	close_file(oTo);

	return (0);
}

/**
 * close_file - function to close a file
 * @fd: fd
 * Return: void
 */

void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit (100);
	}
}



