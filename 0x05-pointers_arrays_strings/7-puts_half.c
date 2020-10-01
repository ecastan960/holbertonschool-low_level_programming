#include "holberton.h"

/**
 * puts_half - This program will print using _putchar function
 * @str: string
 * Description: prints Holberton using the function
 * Return: 0
 *
 */

void puts_half(char *str)
{
int a, b, n;
char *s1, c;
s1 = str;
for (a = 0; str[a] != '\0'; ++a)
{
}
if (a % 2 == 0)
{
n = a / 2;
}
else
{
n = (a - 1) / 2;
}
for (b = 0; b < n; b++)
{
s1++;
}
for (b = n; b < a ; ++b)
{
c = *s1;
_putchar(c);
s1++;
}
_putchar('\n');
}
