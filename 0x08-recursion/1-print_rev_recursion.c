#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - rints a string in reverse.
 * @s: a charcter pointer
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
