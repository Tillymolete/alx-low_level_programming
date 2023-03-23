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
				c = (char) va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float) va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", str);
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
