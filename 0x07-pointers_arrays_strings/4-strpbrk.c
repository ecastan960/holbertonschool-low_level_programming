#include "holberton.h"

/**
 * _strpbrk - This program will print using _putchar function
 * @s: array
 * @accept: number
 * Description: prints Holberton using the function
 * Return: char
 *
 */

char *_strpbrk(char *s, char *accept)
{
int i = 0, c = 0, d = 0, e = 0;
while (*accept)
{
while (s[i] != 0)
{
if (s[i] == *accept)
{
if (d == 0)
{
d = i;
c = i;
}
else if (i < c)
{
c = i;
}
}
i = i + 1;
}
i = 0;
accept++;
}
for (e = 0 ; e < c; e++)
{
s++;
}
return (s);
}
