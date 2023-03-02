#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * leet - This will encodes a string into 1337
 * @str: the pointer of the string
 * Return: a pointer to the encoded string
 */

char *leet(char *str)
{
	char *ptr = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_nums = "4433007711";

	for (int i = 0; i < 10; i++)
	{
		if (*ptr == leet_chars[i])
		{
			*ptr = leet_nums[i];
			break;
		}
	}
	return (str);
}
