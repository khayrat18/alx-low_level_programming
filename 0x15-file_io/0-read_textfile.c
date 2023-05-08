#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: file to be opened
 * @letters: number of letteres to read and print
 *
 * Return: return number of letters, otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t t;
	ssize_t w;
	ssize_t fd;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	 buffer = malloc(sizeof(char) * (letters));

	t  = read(fd, buffer, letters);

	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (w);
}
