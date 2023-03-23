#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of arguments
 * Return: the sum of variable arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	
	if (n == 0)
	{
		return (0);
	}
	va_list args;
	va_start(args, n);
	int sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args int);
	}
	va_end(args);
	return (sum);
}
