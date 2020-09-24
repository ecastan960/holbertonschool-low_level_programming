#include "holberton.h"

/**
 * print_numbers - This program will print using _putchar function
 *
 * Description: prints Holberton using the function
 * Return: 0
 *
 */
void print_numbers(void)
{
int b;
for (b = '0'; b <= '9' ; b++)
{
_putchar(b);
}
_putchar('\n');
}
