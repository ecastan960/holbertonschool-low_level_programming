#include "holberton.h"

/**
 * _strlen_recursion - This program will print using _putchar function
 * @s: array
 * Description: prints Holberton using the function
 * Return: s
 *
 */

int _strlen_recursion(char *s)
{
if (*s == 0)
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
