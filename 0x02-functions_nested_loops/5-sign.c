#include "holberton.h"
/**
 * print_sign - This program will print using _putchar function
 * @n: The character to evaluate
 *
 * Description: prints Holberton using the function
 * Return: 0
 *
 */
int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('0');
return (0);
}
}
