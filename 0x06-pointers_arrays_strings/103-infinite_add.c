#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * infinite_add - This function that adds two numbers
 * @n1: The first string
 * @n2: The second string
 * @r: the buffer to store the result
 * @size_r: the size of the buffer
 * Return: a pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int len1 = strlen(n1);
	int len2 = strlen(n2);

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	int i = len1 - 1;
	int j = len2 - 1;
	int k = 0;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		int sum = carry;

		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';
		carry = sum / 10;
		r[k++] = sum % 10 + '0';
	}
	r[k] = '\0';
	strrev(r);
	return (r);
}
