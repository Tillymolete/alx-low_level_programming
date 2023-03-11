#include <stdio.h>
#include <stdlib.h>

/**
 * main - this will print multiplies two numbers
 * @argc: the agrument count
 * @argv: the argument vector
 * Return: 0 when two arguments recieved otherwise 1
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
