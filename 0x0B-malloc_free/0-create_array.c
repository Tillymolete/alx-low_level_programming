#include "main.h"
#include <stdio.h>

/**
 * create_array - creates an array of chars initializes it to a char.
 * @size: The size of the array.
 * @c: The character to the array.
 * Return: 0 if size is 0 or NULL for function fail otherise a pointer.
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
