#include <stdio.h>
#include "main.h"
#include <ctype.h>

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
		if (isalpha(*p))
		{
			int shift = (*p >= 'a' && *p <= 'z') ? 13 : 13;
			char base = (*p >= 'a' && *p <= 'z') ? 'a' : 'A';

			*p = base + ((*p - base + shift) % 26);
		}
		p++;
	}
	return (str);
}
