#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: a pointer to a memory
 * @b: character that fills the memory area
 * @n: an unsigned integer
 * Return: a pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
