#include "main.h"

/**
 * int _abs - compute the absolute of an integer
 *@c: The number to be computed
 * Return: absolute number or zero
 */

int _abs(int c)
{
       if (c > 0)
       {
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}	
