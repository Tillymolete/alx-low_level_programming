#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * cap_string - This function will capitalizes all words of a string
 * @str: This is the string pointer
 * Return: The string
 */

char *cap_string(char *str)
{
	int i = 0;

	if (islower(str[i]))
	{
		str[i] = toupper(str[i]);
	}
	i++;
	while (str[i] != '\0')
	{
		if (isspace(str[i - 1]) || ispunct(str[i - 1]))
		{
			str[i] = toupper(str[i]);
		}
		i++;
	}
	return (str);
}