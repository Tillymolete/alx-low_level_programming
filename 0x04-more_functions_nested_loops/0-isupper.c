#include <main.h>

/**
 * _isupper - checks for uppercase character
 * @c: input
 * Return: 1 if c is uppercase else 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
	return (1);
	}
	return (0);
}
