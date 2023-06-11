#include <stdio.h>
#include <ctype.h> /* isdigit() */
#include <stdlib.h> /* atoi() */

/**
 * main - prints out the result of adding arguments passed to it
 * if no number is passed to it, it prints out 0
 * if one of the arguments passed is not a digit it prints Error
 * 
 * @argc: argument count
 * @argv: add these arguments
 *
 * Return: 0, if success
 * 1, if Error
 */

int main(int argc, char **argv)
{
	int i;
	int result = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				result += atoi(argv[i]);
			}
		}

		printf("%d\n", result);
	}

	return (0);
}
