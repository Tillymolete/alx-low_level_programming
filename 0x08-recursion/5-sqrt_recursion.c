#include "main.h"
#include <stdio.h>

int sqrt_helper(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * sqrt_helper - calculates the natural square root
 * @n: integer
 * @i: interate the number
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

/**
 * sqrt_helper - calculates the natural square root
 * @i: interate the number
 * @n: the integer
 * Return: the integer
 */

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
