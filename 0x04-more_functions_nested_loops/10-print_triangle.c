#include "holberton.h"

/**
 * print_triangle - This program will print using _putchar function
 * @size: integer to evaluate
 *
 * Description: prints Holberton using the function
 * Return: 0
 *
 */
void print_triangle(int size)
{
int a, b, c = 1, d;
if (size <= 0)
{
_putchar('\n');
}
else
{

for (a = 0; a < size ; a++)
{
for (b = 0 ; b < size - c ; b++)
{
_putchar(' ');
}
for (d = 0 ; d < c ; d++)
{
_putchar('#');
}
c = c + 1;
_putchar('\n');
}
}
}
