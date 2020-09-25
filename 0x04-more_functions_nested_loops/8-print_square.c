#include "holberton.h"

/**
 * print_diagonal - This program will print using _putchar function
 * @n: integer to evaluate
 *
 * Description: prints Holberton using the function
 * Return: 0
 *
 */
void print_square(int size)
{
int a, b;
if (size <= 0)
{
_putchar('\n');
}
else
{
if (size > 1)
{
for (a = 0; a < size ; a++)
{
for (b = 0 ; b < size ; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
}