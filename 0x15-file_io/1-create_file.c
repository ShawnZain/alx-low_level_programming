#include "main.h"

/*
 * create_file - creates a new file
 * @filename: file name
 * @text_content: what to write to the file
 * Return: 1 on sucess
 * 	  -1 on failure: create fails, write faisl, filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
		{
			i++;
		}
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC | 0600);
	if (fd < 0)
	{
		return (-1);
	}

	w = write(fd, text_content, i);
	if (w < 0)
	{
		write(1, "Cannot write to file", 20);
		return (-1);
	}

	close(fd);

	return (1);
}
