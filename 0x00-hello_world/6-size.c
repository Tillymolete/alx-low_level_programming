#include <stdio.h>
/**
 * main - print the size of various types on the computer it is compiled
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %zu byte(s)\n", Sizeof(char));
printf("Size of an int: %zu byte(s)\n", Sizeof(int));
printf("Size of a long int: %zu byte(s)\n", Sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", Sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", Sizeof(float));
return (0);
}
