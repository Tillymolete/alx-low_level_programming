#include <stdio.h>
#include "main.h"

/**
 * print_rev -  prints a string in reverse
 * @s: String to print
 * Return: Nothing
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
	c++;
	}

	for (c -= 1; c >= 0; c--)
	{
	putchar(s[c]);
	}
	putchar('\n');
}
