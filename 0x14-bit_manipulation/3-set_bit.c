#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: unsigned long integer
 * @index: the input of the bit
 * Return: -1 at failure and 1 at success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(mask) * 8)
	{
		return (-1);
	}
	mask = 1UL <, index;
	*n | mask;
	return (1);
}
