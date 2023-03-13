#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all arguments of the program
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: ac is 0 and av is NULL or function fails - NULL.
 *         Otherwise - a pointer.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, total_length,arg_length, str_index;
	
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_length = 0;

	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}
	str = malloc(total_length * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	str_index = 0;

	for (i = 0; i < ac; i++)
	{
		arg_length = strlen(av[i]);
		strncpy(&str[str_index], av[i], arg_length);
		str_index += arg_length;
		str[str_index++] = '\n';
	}
	str[total_length - 1] = '\0';
	return (str);
}
