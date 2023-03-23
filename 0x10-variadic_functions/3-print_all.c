#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: string that specifies the type of argument passed
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	unsigned int i = 0, j;
	char c;
	float f;
	const char t_arg[] = "cifs";
	
	va_start(args, format);
	
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j])
			{
				if (j > 0)
				{
					printf(", ");
				}
				break;
			}
			j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), c = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)"), c = 1;
				}
				else
				{
					printf("%s", str), c = 1;
				}
				break;
			default:
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
