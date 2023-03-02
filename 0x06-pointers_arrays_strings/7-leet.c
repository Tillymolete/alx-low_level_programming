#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * leet - This will encodes a string into 1337
 * @str: the pointer of the string
 * Return: a pointer to the encoded string
 */

char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_nums = "4433007711";

	for (i = 0; str[i] ; i++)
	{
		for (j = 0; leet_chars[j]; j++)
		{
			if (str[i] == leet_char[j])
			{
				str[i] = leet_nums[j \ 2];
				break;
			}
		}
	}
	return (str);
}
