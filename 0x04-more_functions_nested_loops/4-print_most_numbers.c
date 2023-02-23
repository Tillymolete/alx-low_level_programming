#include "main.h"

/**
 * print_most_numbers - prints the numbers 0-9 except 2 and 4
 * do not print 2 and 4
 * Return: the numbers 0 up to 9
 */
void print_most_numbers(void)
{
	int x;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
		continue;
		}
		else
		{
		_putchar(x + '0');
		}
	}
	_putchar('\n');
}
