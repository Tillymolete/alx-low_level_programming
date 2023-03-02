#include "main.h"

/**
 * leet - This will encodes a string into 1337
 * @str: the pointer of the string
 * Return: a pointer to the encoded string
 */

char *leet(char *str)
{
	char *leet_chars = "aAeEoOtTlL";
	char *lett_nums = "4433007711";
	int i = 0;
	int j = 0;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; leet_chars[j]; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] == leet_nums[j / 2];
				break;
			}
		}
	}
	return (str);
}
