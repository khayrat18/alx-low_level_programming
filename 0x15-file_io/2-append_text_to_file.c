#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 *
 * @filename: file to be created
 * @text_content: content of file
 *
 * Return: returns 1, otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, len);
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);

}
