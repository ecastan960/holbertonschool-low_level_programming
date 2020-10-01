#include "holberton.h"

/**
 * _strcat - This program will print using _putchar function
 * @dest: array
 * @src: number
 * Description: prints Holberton using the function
 * Return: s
 *
 */

char *_strcat(char *dest, char *src)
{

int a = 0, b;
while (*dest)
{
dest++;
a = a + 1;
}
while (*src)
{
*dest = *src;
dest++;
src++;
a = a + 1;
}
*dest = '\0';
for (b = 0; b < a; b++)
{
dest--;
}
return (dest);
}
