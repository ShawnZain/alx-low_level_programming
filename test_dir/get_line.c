#include <stdio.h>

int main(void)
{
	char *buff;
	size_t bufsize = 1024;
	size_t chars;

	buff = malloc(sizeof(char) * bufsize);
	if (!buff)
	{
		fprintf(STDERR_FILENO,
				"Couldn't allocate\n");
		exxit(EXIT_FAILURE);
	}

	fprintf(STDOUT_FILENO,
			"Type something: ");
	chars = getline(&buff, &bufsize, stdin);
	fprintf

