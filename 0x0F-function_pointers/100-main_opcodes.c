#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	char *opcodes = char (*) main;
	int i, num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", opcodes[i]);
	}
	printf("\n");

	return (0);
}
