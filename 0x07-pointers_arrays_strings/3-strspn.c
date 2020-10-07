#include "holberton.h"

/**
 * _strspn - This program will print using _putchar function
 * @s: array
 * @accept: number
 * Description: prints Holberton using the function
 * Return: char
 *
 */

unsigned int _strspn(char *s, char *accept)
{
int i = 0, c = 0;
while (*accept)
{
while (s[i] != 0 && s[i] != 32)
{
if (s[i] == *accept)
{
c = c + 1;
}
i = i + 1;
}
i = 0;
accept++;
}
return (c);
}
