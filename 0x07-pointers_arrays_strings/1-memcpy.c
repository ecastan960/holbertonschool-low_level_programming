#include "holberton.h"

/**
 * _memcpy - This program will print using _putchar function
 * @s: array
 * @b: number
 * @n: number
 * Description: prints Holberton using the function
 * Return: char
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
*dest = *src;
i++;
dest++;
src++;
}
return (dest);
}
