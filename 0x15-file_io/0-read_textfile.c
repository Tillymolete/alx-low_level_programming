#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints letters
 * @filename: the file name
 * @letters: number of letters printed
 * Return: number of letters, otherwise 0 at failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytes_read = 0;
	ssize_t bytes_written = 0;
	FILE *fp = NULL;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	buffer = malloc(letters + 1);
	if (buffer == NULL)
		return (0);

	bytes_read = fread(buffer, 1, letters, fp);
	if (bytes_read <= 0)
		return (0);

	buffer[bytes_read] = '\0';
	bytes_written = fwrite(buffer, 1, bytes_read, stdout);
	if (bytes_written != bytes_read)
		return (0);

	fclose(fp);
	free(buffer);

	return (bytes_written);
}
