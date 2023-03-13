#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer allocated space in memory.
 * @str: the string
 * Return: NULL if str is NULL ortherwise a pointer
 */

char *_strdup(char *str)
{
	char *dup_str;

	if (str == NULL)
	{
		return (NULL);
	}
	dup_str = malloc(strlen(str) + 1);
	if (dup_str == NULL)
	{
		return (NULL);
	}
			strcpy(dup_str, str);

			return (dup_str);
}
