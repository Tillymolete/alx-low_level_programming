#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers, followed by a new line
 * @n: the number of integers passed to the function
 * @separator: the string that will be printed between the numbers
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
			if (i < n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
	}
	va_end(args);
	printf("\n");
}
