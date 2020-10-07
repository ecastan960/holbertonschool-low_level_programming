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
while (*s)
{
_putchar(*s);
s++;
}
_putchar('\n');
}
