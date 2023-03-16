#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_digit_string -checks if string only contains digit
 * @str: the string
 * Return: an integer
 */

int is_digit_string(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * multiply - multiplies two positive numbers
 * @num1: the first number
 * @num2: the second number
 * Result: Nothing
 */

void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, carry, product;
	int *result;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	result = calloc(len1 + len2, sizeof(int));

	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = len1 - 1, i >= 0; i--;)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1];
			result[i + j + 1] = product % 10;
			carry = product / 10;
		}
		result[i] = carry;
	}
	i = 0;
	while (i < len1 + len2 - 1 && result[i] == 0)
		i++;
	while (i < len1 + len2)
	{
		printf("%d", result[i]);
		i++;
	}
	printf("\n");
	free(result);
}

/**
 * main - multiplies two positive numbers
 * @argc: the argument count
 * @argv: the argument vector
 * Return: an integer
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!is_digit_string(argv[1]) || !is_digit_string(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	multiply(argv[1], argv[2]);
	return (0);
}
