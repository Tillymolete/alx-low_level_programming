#include <stdio.h>
#include "main.h"

/**
 * rot13 - this function encodes a string using rot13
 * @str: the input string
 * Return: the encoded string
 */

char *rot13(char *str)
{
	char *p = str;

	while (*p)
	{
		char c = *p;

		if (isalpha(c))
		{
			if (islower(c))
			{
				c = 'a' + (c - 'a' + 13) % 26;
			}
			else
			{
				c = 'A' + (c - 'A' + 13) % 26;
			}
			*p = c;
		}
		p++;
	}
	return (str);
}
