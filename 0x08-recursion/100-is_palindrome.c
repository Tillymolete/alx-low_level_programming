#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: input string
 * Return: the integer
 */

int is_palindrome(char *s)
{
	int len =strlen(s);
	
	if (len <= 1)
	{
		return (1);
	}
	
	return (stencmp(s, s + len - 1, 1) == 0 && is_palindrome(s + 1, len - 2));
}
