#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFSIZE 1024

/**
 * error_file - checks if file can be opened
 * @file_from: the file where the content is from
 * @file_to: file content is sent to
 * @arg: the argument vector
 * Return: no return
 */

viod error_exit(const char *msg, const char *arg, int code)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(code);
}

/**
 * main - checks the code 
 * @argc: the number of arguments
 * @argv: the argument vector
 * Return: 0 at success
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, n;
	char buf[BUFSIZE];

	if (argc != 3)
	{
		error_exit("Usage: cp file_from file_to\n", NULL, 97);
	}

	fd_from = open(argv[1], ORDONLY);

	if (fd_from == -1)
	{
		error_exit("Error: Can't read to %s\n", argv[1], 98);
	}

	fd_to = open(argv[2], O_WRONLY |O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		error_exit("Error: Can't write to %s\n", argv[2], 99);
	}

	while ((n = read(fd_from, buf, BUFSIZE)) > 0)
	{
		if (write(fd_to, buf, n) != n)
		{
			error_exit("Error: Can't write %s\n", argv[2], 99);
		}
	}

	if (n == -1)
	{
		error_exit("Error: Can't read from file %s\n", argv[1], 98);
	}

	if (close(fd_from) == -1)
	{
		error_exit("Error: Can't close fd %d\n", fd_from, 100);
	}
	if (close(fd_to) == -1)
	{
		error_exit("Error: Can't close fd %d\n", fd_to, 100);
	}
	return (0);
}
