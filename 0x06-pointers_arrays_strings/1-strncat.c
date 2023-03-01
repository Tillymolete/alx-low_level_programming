#include "main.h"

/**
 * _strncat -  concatenates two strings.
 * @n: the integer
 * @dest: the first string
 * @src: the second string
 * Return: return a pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	char i = dest;
	char j = src;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
