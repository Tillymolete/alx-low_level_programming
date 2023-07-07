#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer for an unsigned int
 * @index: index of bit
 * Return: 1 success otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;
	*n = (*n | m);

	return (1);
}
