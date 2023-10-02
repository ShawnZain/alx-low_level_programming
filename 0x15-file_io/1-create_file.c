#include "main.h"

/**
 * create_file - creates a file of a given filename and the content of
 * the opened file
 * The created file should have the permission 0600
 * If the file exists, do not change permissions,
 * If the file exists, truncate it
 *
 * @filename: name of the file we want to create
 * @text_content: content that will be written to the file
 *
 * Return: 1 on success or
 * -1 when:
 * file cannot be created
 * file cannot be written
 * write fails
 * filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
