#include "main.h"
#define BUFFSIZE 1024

char *create_buff(char *filename);
void close_file(int fd);

/**
 * main - copies the content of one file to another
 *
 * @argv: arguments to be passed i.e. file_from & file_to
 * @argc: number of arguments to be passed i.e. 2
 *
 * EXIT (97) - wrong number of arguments, error: "Usage: cp file_from file_to"
 * EXIT (98) - file_from does not exist,
 * error "Error: Can't read from file NAME_OF_THE_FILE"
 * EXIT (99) - cannot create file_to cannot write to file_to if it exists
 * error "Error: Can't write to NAME_OF_THE_FILE"
 * EXIT (100) - cannot close a file descriptor
 * error "Error: Can't close fd FD_VALUE"
 *
 * CONDITIONS:
 * if file_to does not exist create it with the permissions - 0664
 * MUST read 1,024 bytes at a time from the file_from to make
 * less system calls. Use a buffer
 *
 * Return: 0 on success, else exit as above
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buff(argv[2]);
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	r = read(from, buff, BUFFSIZE);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(2, "Error: Can't read from %s\n", argv[1]);
			exit(98);
		}

		w = write(to, buff, r);
		if (to == -1 || w == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

		r = read(from, buff, BUFFSIZE);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buff);
	close_file(from);
	close_file(to);
	return (0);
}

/**
 * create_buff - creates a buffer
 * @filename: used to print the error message
 * Return: buffer
 */
char *create_buff(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * BUFFSIZE);
	if (!buff)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - closes an open file
 * @fd: file descripter
 * Return: void
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
