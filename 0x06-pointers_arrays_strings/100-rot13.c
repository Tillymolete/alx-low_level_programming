#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * rot13 - this function encodes a string using rot13
 * @str: the input string
 * Return: the encoded string
 */

char *rot13(char *str)
{
	int a = 0;

	while (str[a])
	{
		while ((str[a] >= 'a' && str[a] <= 'z') || (str[a] >= 'A' && str[a] <= 'Z'))
		{
			if ((str[a] > 'm' && str[a] <= 'z') || (str[a] > 'M' && str[a] <= 'Z'))
			{
				str[a] -= 13;
				break;
			}

			str[a] += 13;
			break;
		}

		a++;
	}

	return (str);
}
