#include "holberton.h"

/**
 * _puts - This program will print using _putchar function
 * @str: string
 * Description: prints Holberton using the function
 * Return: 0
 *
 */

void _puts(char *str)
{
int a;
for (a = 0; str[a] != '\0'; ++a)
{
_putchar(str[a]);
}
_putchar('\n');
}
