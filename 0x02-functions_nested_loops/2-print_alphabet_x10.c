#include "main.h"

/**
 * main - Print the alphabet 10 times- Make alphabet x10
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char ch;
	int i= 0;

	while (i <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');

		i++;
	}
}
	
