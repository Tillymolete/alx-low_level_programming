#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: a pointer to an unsigned long integer
 * @index: input that sets balue of bit at a specific index
 *
 * Return: -1 if an error occurs , otherwise 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(mask) * 8)
	{
		return (-1);
	}
	mask = ~(1UL << index);
	*n &= mask;
	return (1);
}
