#include "holberton.h"

/**
 * print_diagonal - This program will print using _putchar function
 * @n: integer to evaluate
 *
 * Description: prints Holberton using the function
 * Return: 0
 *
 */
void print_diagonal(int n)
{
int a, b;
if (n <= 0)
{
}
else
{
if (n > 1)
{
for (a = 0; a < n ; a++)
{
for (b = 0 ; b < a ; b++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
_putchar('\n');
}
