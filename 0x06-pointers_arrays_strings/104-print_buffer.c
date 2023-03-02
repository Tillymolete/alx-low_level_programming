#include <stdio.h>
#include "main.h"

/**
 * print_buffer - This function that prints a buffer
 * @b: the buffer
 * @size: the entry input
 * Return: Nothing
 */

void print_buffer(char *b, int size)
{
	int i = 0;
	int j = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x ", *(b + j));
			else
				printf("  ");
			if (j % 2 == 1)
				printf(" ");
		}
		for (j = i; j < 1 + 10; j++)
		{
			if (j >= size)
				break;
			if (*(b + j) >= 32 && *(b + j) <= 126)
				_putchar(*(b + j));
			else
				_putchar('.');
		}
		_putchar('\n');
	}
}
