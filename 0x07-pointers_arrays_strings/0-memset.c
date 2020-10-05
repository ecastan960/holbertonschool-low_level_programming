#include "holberton.h"

/**
 * _memset - This program will print using _putchar function
 * @s: array
 * @b: number
 * @n: number
 * Description: prints Holberton using the function
 * Return: char
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
