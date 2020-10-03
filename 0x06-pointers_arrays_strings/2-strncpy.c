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

char *_strncpy(char *dest, char *src, int n)
{

int a = 0, b, c;

for (c = 0 ; c < n; c++)
{
*dest = *src;
dest++;
src++;
a = a + 1;
}
for (b = 0; b < a; b++)
{
dest--;
}
return (dest);
}
