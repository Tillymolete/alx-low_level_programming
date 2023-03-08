#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - returns 1 for integer prime number, otherwise 0
 * @n: integer
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	int i = 3;

	while (i * i <= n)
	{
		if (n % 1 == 0)
		{
			return (0);
		}
		i += 2;
	}
	return (1);
}
