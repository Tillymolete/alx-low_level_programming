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
	int i, j, total_length = 0, str_index = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_length = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			total_length++;
		}
	}
	str = malloc(sizeof(char) * total_length + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	str_index = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[str_index++] = av[i][j];
		}
		str[str_index++] = '\n';
	}
	str[str_index] = '\0';
	return (str);
}
