#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define FILE_PERMISSIONS S_IRUSR | S_IWUSR
/**
 * create_file -  creates a file.
 * @filename: the file name
 * @text_content: the content in the file
 *
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
