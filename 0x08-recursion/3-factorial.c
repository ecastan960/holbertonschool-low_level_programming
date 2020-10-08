#include "holberton.h"

/**
 * factorial - This program will print using _putchar function
 * @n: array
 * Description: prints Holberton using the function
 * Return: s
 *
 */

int factorial(int n)

{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (0);
}
if (n >= 1)
{
if (n == 1)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
return (0);
}
