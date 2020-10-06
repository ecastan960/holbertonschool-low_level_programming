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
unsigned int i = 0;
int c = 0;
while (*accept != 0)
{
while (*s != 0 || *s != 32)
{
if (*s == *accept)
{
i = i + 1;
}
c = c + 1;
s++;
}
s = s - c;
c = 0;
accept++;
}
return (i);
}
