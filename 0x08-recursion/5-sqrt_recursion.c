#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * sqrt_helper - helps calculate the natural square root
 * @n: integer
 * @i: second integer
 * Return: the integer
 */

int sqrt_helper(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (sqrt_helper(n, 1));
	}
}

int sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (sqrt_helper(n, i + 1));
	}
}
