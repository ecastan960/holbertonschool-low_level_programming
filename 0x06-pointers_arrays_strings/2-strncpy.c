#include "holberton.h"

/**
 * _strncat - This program will print using _putchar function
 * @dest: string
 * @src: string
 * @n: number
 * Description: prints Holberton using the function
 * Return: s
 *
 */

char *_strncat(char *dest, char *src, int n)
{

int a = 0, b, c;
while (*dest)
{
dest++;
a = a + 1;
}
for (c = 0 ; c < n; c++)
{
if (*src != '\0')
{
*dest = *src;
dest++;
src++;
a = a + 1;
}
}
*dest = '\0';
for (b = 0; b < a; b++)
{
dest--;
}
return (dest);
}
