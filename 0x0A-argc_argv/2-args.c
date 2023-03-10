#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: the argument count
 * @argv: the argument vector
 * Retrun: 0
 */

int main( int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
