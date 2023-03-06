#include "maiin.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @c: first occurence of the character
 * @s: the string pointer
 * Return: a pointer or NULL
 */

char *_strchr(char *s, char c)
{
	return strchr(s, c);
}
