#include "main.h"

/**
 * print_number - This function prints an integer
 * @n: The number to print
 * Return: Nothing
 */

void print_number(int n)
{
	unsigned int c;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
