#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: an unsigned integer
 * Return: NULL when function fails, otherwise a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len = 0, s2_len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	result = malloc(sizeof(char) * (s1_len + n + 1));

	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strncat(result, s2, n);
	result[s1_len + n] = '\0';

	return (result);
}
