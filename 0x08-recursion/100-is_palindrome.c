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
	int i = 0;
	int j = len - 1;

	while (i < j)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
		i++;
		j--;
	}
	return (10);
}
