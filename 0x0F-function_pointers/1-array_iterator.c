#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes function given as a parameter on element of array.
 * @array: the integer
 * @size: size of integer
 * @action: the function pointer
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
