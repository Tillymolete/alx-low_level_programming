#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits needed to 
 * flip to one number to another.
 * @n: first unsigned long integer
 * @m: the second unsigned long integer
 * Return: the counts of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while(diff)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
