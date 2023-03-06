#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: source string
 * @accept: accepted string
 * Return: NULL
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
