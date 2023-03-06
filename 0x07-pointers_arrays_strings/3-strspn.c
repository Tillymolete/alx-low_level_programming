#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: first pointer
 * @accept: second pointer
 * Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int accept_len = strchr(accept);

	while (*s && strchr(accept, *s))
	{
		count++;
		s++;
	}
	return (count);
}
