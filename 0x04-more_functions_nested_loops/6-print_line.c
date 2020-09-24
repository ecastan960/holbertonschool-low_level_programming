#include "holberton.h"

/**
 * print_line - This program will print using _putchar function
 * @n: integer to evaluate
 *
 * Description: prints Holberton using the function
 * Return: 0
 *
 */
void print_line(int n)
{
int a;
for (a = 0; a <= n; a++)
{
if (n <= 0)
{
}
else
{
_putchar('_');
}
}
_putchar('\n');
}
