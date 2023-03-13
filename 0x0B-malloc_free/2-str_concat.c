#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string.
 * @s2: The string to concatenated to s1.
 *
 * Return: If concatenation fails - NULL, Otherwise a pointer
 */
char *str_concat(char *s1, char *s2)
{
	int len2;
	int len1;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	result = malloc(sizeof(char) * (len1 + len2));
	
	if (result == NULL)
	{
	return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}	
