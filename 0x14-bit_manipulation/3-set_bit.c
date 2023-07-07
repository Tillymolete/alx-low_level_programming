#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer of unsigned long int
 * @index: index of the bit
 * Return: 1 success otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 63)
		retun (-1);

	mask = 1 << index;
	*n = (*n | mask);

	return (1);
}
