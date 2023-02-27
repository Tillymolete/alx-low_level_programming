#include "main.h"

/**
 * _puts - prints a string
 * @str: this is the string character
 * Return: nothing
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_puts(*str);
	}
	_puts('\n');

}
