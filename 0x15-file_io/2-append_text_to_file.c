#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of file to append text to
 * @text_content: text to append to the file
 * Return: 1 on success
 * 	   -1 on failure or if filename is NULL
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}

	o = open(filename, O_APPEND | O_WRONLY);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
