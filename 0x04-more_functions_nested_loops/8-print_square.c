#include "main.h"

/**
 * print_square - prints a square
 * size: the size of the square
 * Return: void
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		for (int x = 0; x < size; x++)
		{
			for (int y = 0; y < size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
