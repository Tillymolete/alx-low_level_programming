#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmemb: the number of elements
 * @size: the size of each element
 * Return: NULL if nmemb and size = 0 or function fails otherwise a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	p = (char *)ptr;

	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}
	return (ptr);
}
