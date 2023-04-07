#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the unsigned long integer
 * @index: the output of the bit
 * Return: the value of the bit specified by n
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(mask) * 8)
	{
		return (-1)
	}
	mask = 1UL << index;
	return (n & mask) != 0;
}
