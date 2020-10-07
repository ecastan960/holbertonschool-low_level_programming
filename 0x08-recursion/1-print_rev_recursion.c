#include "holberton.h"

/**
 * _print_rev_recursion - This program will print using _putchar function
 * @s: array
 * Description: prints Holberton using the function
 * Return: s
 *
 */

void _print_rev_recursion(char *s)
{

if (*s == 0)
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);

}
