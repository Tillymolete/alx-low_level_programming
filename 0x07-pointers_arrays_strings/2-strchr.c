#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the pointer
 * @c: the first character
 * Return: NULL or a pointer
 */

char *_strchr(char *s, char c)
{
        int a = 0;

        while (s[a])
        {
                a++;
        }
        for (b = 0; b <= a; b++)
        {
                if (c == s[b])
                {
                        s += b;
                        return (s);
                }
        }
        return ('\0');
}
