#include <unistd.h>
/**
 * _putchar -this will write the c character
 * @c: the character to print
 * Return: 1
 * on error, -1 is required, and errno is set appropriately.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
