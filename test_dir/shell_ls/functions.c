#include "shell.h"
#define SH_BUFSIZE 1024
/**
 * sh_read_line - reads the input of the user
 * and returns what has been read in array
 * takes not arguments
 * Return: what has been inputted by user
 */
char *sh_read_line(void)
{
	int bufsize = SH_BUFSIZE;
	int index = 0;
	char *buffer;
	int c;
	/* c is int because EOF is an int value */

	buffer = malloc(sizeof(char) * bufsize);
	if (!buffer)
	{
		fprintf(STDERR_FILENO, "lsh: allocation error \n");
		exit(EXIT_FAILURE);
	}

	while (1)
	{
		c = getchar();

		if (c == EOF || c == '\n')
		{
			buffer[index] = '\0';
			return (buffer);
		}
		else
			buffer[index] = c;

		index++;

		if (index >= bufsize)
		{
			bufsize += SH_BUFSIZE;
			buffer = realloc(buffer, bufsize);
			if (!buffer)
			{
				fprintf(STDERR_FILENO,
						"lsh: allocation error\n");
				exit(EXIT_FAILURE);
			}
		}
	}
}
