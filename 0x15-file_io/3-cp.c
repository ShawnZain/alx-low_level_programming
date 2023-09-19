#include "main.h"

char *create_buffer(char *file);
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
	int from, to, r, w;
	char *buffer;

	if  (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}


/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
