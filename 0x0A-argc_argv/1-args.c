#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed
 * @argc: the agrument count
 * @agrv: the argument vector
 * Return: 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
