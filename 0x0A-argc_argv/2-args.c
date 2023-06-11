#include <stdio.h>

/**
 * main - prints the arguments passed to main including the first one
 * each argument should be in its own line and end in a new line
 *
 * @argc: arguments count
 * @argv: arguments to print out
 *
 * Return: 0, success
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

