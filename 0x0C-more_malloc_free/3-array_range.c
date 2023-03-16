#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: the minimum value of the array
 * @max: the maximum value of the array
 * Return: NULL if max an min = 0 or if function fails otherwise a pointer
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
