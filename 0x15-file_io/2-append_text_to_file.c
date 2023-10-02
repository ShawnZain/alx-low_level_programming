#include "main.h"

/**
 * append_text_to_file - opens a file in write mode
 * and appends text to the file
 * DO NOT create the file if it does not exist
 *
 * @filename: the name of the file that we should open
 * the file should exist
 * @text_content: text that we will append to the file
 *
 * Return: 1 on success
 * Otherwise -1 on error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	for (len = 0; text_content[len];)
		len++;
	/* printf("Length of text_content is: %d\n", len); */

	fd = open(filename, O_APPEND | O_WRONLY);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1 || w != len)
	{
		return (-1);
	}
	else
	{
		close(fd);
		return (1);
	}
}
