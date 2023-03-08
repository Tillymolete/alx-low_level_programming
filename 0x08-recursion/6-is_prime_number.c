#include "main.h"
#include <stdio.h>

/**
 * int is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0
 * @n: integer
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % 1 == 0)
		{
			return (0);
		}
	}
	return (1);
}
