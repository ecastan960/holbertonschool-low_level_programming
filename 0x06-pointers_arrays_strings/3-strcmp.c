#include "holberton.h"

/**
 * _strncpy - This program will print using _putchar function
 * @dest: string
 * @src: string
 * @n: number
 * Description: prints Holberton using the function
 * Return: s
 *
 */

int _strcmp(char *s1, char *s2)
{
int a = 0, b = 0;
while (*s1)
{
s1++;
a = a + *s1;
}
while (*s2)
{
s2++;
b = b + *s2;
}
return (a - b);
}
