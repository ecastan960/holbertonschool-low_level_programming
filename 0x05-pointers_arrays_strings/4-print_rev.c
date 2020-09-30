#include "holberton.h"

/**
 * print_rev - This program will print using _putchar function
 * @s: string
 * Description: prints Holberton using the function
 * Return: 0
 *
 */

void print_rev(char *s)
{
int a, b;

for (a = 1; s[a] != '\0'; ++a)
{
}
for (b = a; b >= 0; --b)
{
_putchar(s[b]);
}
_putchar('\n');
}
