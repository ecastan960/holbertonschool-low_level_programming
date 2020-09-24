#include "holberton.h"

/**
 * print_most_numbers - This program will print using _putchar function
 *
 * Description: prints Holberton using the function
 * Return: 0
 *
 */
void print_most_numbers(void)
{
int b;
for (b = '0'; b <= '9' ; b++)
{
if (b == '2' || b == '4')
{
}
else
{
_putchar(b);
}
}
_putchar('\n');
}
