#include "holberton.h"

/**
 * _strncpy - This program
 * @dest: string
 * @src: string
 * @n: number
 * Description: prints Holberton using the function
 * Return: s
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n; i++)
{
	dest[i] = src[i];
}
return (dest);
}
