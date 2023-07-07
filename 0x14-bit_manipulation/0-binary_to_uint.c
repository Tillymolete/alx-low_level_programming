#include <stdio.h>
#include <stddef.h>
#include <ctype.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary number
 * Return: an unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	size_t i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (!isdigit(b[i]))
		{
			return (0);
		}
		num = num * 2 + (b[i] - '0');
	}
	return (num);
}
