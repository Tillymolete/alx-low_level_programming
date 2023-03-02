#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - This function will capitalizes all words of a string
 * @str: This is the string pointer
 * Return: The string
 */
char *cap_string(char *str)
{
	int conversion, index, count;

	char chars[] = {' ', ',', ';', '.', '!',
			 '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};
	conversion = 32;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] >= 'index' && str[index] <= 'z')
		{
			str[index] =  str[index] - conversion;
		}
		conversion = 0;
		for (count = 0; chars[count] != '\0'; count++)
		{
			if (chars[count] == str[index])
			{
				conversion = 32;
				break;
			}
		}
	}
	return (str);
}
