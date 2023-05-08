#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

#define BUF_SIZE 1024

/**
 * main - main entry
 *
 * @argc: argument count
 * @argv: argument value
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{

	int fd_from, fd_to, nread;
	char buf[BUF_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0])
		exit(EXIT_FAILURE);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	while ((nread = read(fd_from, buf, BUF_SIZE)) > 0)
	{
	if (write(fd_to, buf, nread) != nread)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(EXIT_FAILURE);
	}
	}

	if (nread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(EXIT_FAILURE);
	}

	if (close(fd_to) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
	exit(EXIT_FAILURE);
	}

	exit(EXIT_SUCCESS);
}
