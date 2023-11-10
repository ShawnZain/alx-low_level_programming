#include <stdio.h>
#include <unistd.h>

/**
 * main - simple build of shell
 * @argc: keeps track of the argument count
 * @argv: the arguments passed to main
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (isatty(STDIN_FILENO) == 1)
	{
		write(STDOUT_FILENO, "$ ", 3);
	}

	if (EOF)
		return (0);
}
