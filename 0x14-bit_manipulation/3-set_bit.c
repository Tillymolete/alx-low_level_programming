#include <stdio.h>
#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: pointer of unsigned long int
 * @index: index of the bit
 *  Return: the bit value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	unsigned long int mask = 1UL << index;
	
	*n |= mask;

	return (1);
}
