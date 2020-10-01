#include "holberton.h"

/**
 * puts2 - This program will print using _putchar function
 * @str: string
 * Description: prints Holberton using the function
 * Return: 0
 *
 */

void puts2(char *str)
{
int a, b;
char *s1, c;
s1 = str;
for (a = 0; str[a] != '\0'; ++a)
{
}
for (b = 0; b <= a - 1; ++b)
{
c = *s1;
if (b % 2 == 0)
{
_putchar(c);
}
s1++;
}
_putchar('\n');
}
