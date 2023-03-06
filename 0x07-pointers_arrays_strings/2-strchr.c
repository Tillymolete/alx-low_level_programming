#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the pointer
 * @c: the first character
 * Return: NULL or a pointer
 */

char *_strchr(char *s, char c)
{
	strchr(s, c);
	return (strchr(s, c));
}
