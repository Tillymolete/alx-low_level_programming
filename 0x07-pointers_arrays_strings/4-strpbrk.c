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
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
