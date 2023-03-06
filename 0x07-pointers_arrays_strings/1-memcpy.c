#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _memcpy - function that copies memory area
 * @dest: pointer destination memory area
 * @src: pointer to the source area
 * @n: an unsigned integer
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
