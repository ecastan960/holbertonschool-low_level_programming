#include "holberton.h"

/**
 * _puts_recursion - This program will print using _putchar function
 * @s: array
 * Description: prints Holberton using the function
 * Return: s
 *
 */

void _puts_recursion(char *s)
{

if (*s == 0)
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
