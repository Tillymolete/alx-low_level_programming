#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - This function will compare two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
		;
	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
