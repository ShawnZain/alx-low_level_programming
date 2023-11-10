#include <stdio.h>
#include <unistd.h>

/**
 * main - print the argument values passed to the program
 * without using argc
 *
 * @argc: keeps track of the number of arguments passed to the program
 * @argv: string containing the list of arguments passed to the program
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, n;

	for (n = 0; n <= argc;)
	{
		n++;
	}

	for (i = 0; i < n; i++)
	{
		printf("%s ", argv[i]);
	}

	printf("\n");

	return (0);
}
