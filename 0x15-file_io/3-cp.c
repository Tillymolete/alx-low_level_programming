#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

/**
 * error_file - checks if files can be opened.
 * @file_from: file that contains content.
 * @file_to: file to copy file into.
 * @argv: the agrument vector.
 * Return: Nothing
 */

void error_exit(const char *msg, const char *arg, int code)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(code);
}

/**
 * main - copies conetnt fom one file to anothe.
 * @argc: the number of argument
 * @argv: the pointer array
 * Return: 0
 */

int man(int argc, char *argv[])
{
	int fd_from, fd_to, n;
	char buf[BUFSIZE];

	if (argc != 3)
	{
		error_exit("Usage: cp file_from file_to\n", "");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
	{
		error_exit("Error: Can't read from file %d\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd_to == -1)
	{
		error_exit("Error: Can't write to %s\n", argv[2]);
		exit (99);
	}
	while ((n = read(fd_from, buf, BUFSize)) > 0)
	{
		if (write(fd_to, buf, n) != n)
		{
			error_exit("Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (n == -1)
	{
		error_exit("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		error_exit("Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		error_exit("Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
