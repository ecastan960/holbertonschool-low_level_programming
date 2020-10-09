#include "holberton.h"

/**
 * aux - This program will print using _putchar function
 * @n: array
 * @a: array
 * Description: prints Holberton using the function
 * Return: s
 *
 */

int aux(int n, int a)
{
if ((a * a) == n)
{
return (a);
}
if ((a * a) < n)
{
return (aux(n, ++a));
}
if ((a * a) > n)
{
return (-1);
}
return (0);
}

/**
 * _sqrt_recursion - This program will print using _putchar function
 * @n: array
 * Description: prints Holberton using the function
 * Return: s
 *
 */

int _sqrt_recursion(int n)
{
int a = 1, b;
b = aux(n, a);
return (b);
}
