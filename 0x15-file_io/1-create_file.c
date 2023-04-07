#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define File_PERMISSIONS S_IRUSR | S_IWUSR

/**
 * create_file - creates a file.
 * filename: a string that specifies name of created file
 * text_content: a string that contains the content written
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, FILE_PERMISSIONS);

	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		if (write(fd, text_content, len) != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
