#include "holberton.h"

/**
 * _pow_recursion - This program will print using _putchar function
 * @x: array
 * @y: array
 * Description: prints Holberton using the function
 * Return: s
 *
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
else
{
if (y == 1)
{
return (x);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
}
