#include "holberton.h"
/**
 * _abs - This program will print using _putchar function
 * @n: The character to evaluate
 *
 * Description: prints Holberton using the function
 * Return: 0
 *
 */
int _abs(int n)
{
if (n < 0)
{
n = n * -1;
return (n);
}
else if (n > 0)
{
return (n);
}
else
{
return (0);
}
}
