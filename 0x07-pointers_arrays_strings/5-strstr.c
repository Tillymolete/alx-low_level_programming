#include <stdio.h>
#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: the string
 * @needle: the substring
 * Return: NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int haystack_len = strlen(haystack);
	int needle_len = strlen(needle);

	if (needle_len == 0)
	{
		return (haystack);
	}
	if (haystack_len < needle_len)
	{
		return ('\0');
	}
	for (int i = 0; i <= haystack_len - needle_len; i++)
	{
		int j;

	for (j = 0; j < needle_len; j++)
	{
		if (haystack[i + j] != needle[j])
		{
			break;
		}
	}
	if (j == needle_len)
	{
		return (&haystack[i]);
	}
	}
}
