#include <stdio.h>
#include <stdlib.h> /* atoi() */

/**
 * main - prints the result of the product of arguments
 * @argc: argument count
 * @argv: arguments to multiply
 * Return: 0, if arguments are passed to the program
 * else print error and return 1
 */

int main(int argc, char **argv)
{
	int i;
	int result;

	result = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	else if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}

		printf("%d\n", result);
	}

	return (0);
}
