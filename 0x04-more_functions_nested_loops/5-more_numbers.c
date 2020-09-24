#include "holberton.h"

/**
 * more_numbers - This program will print using _putchar function
 *
 * Description: prints Holberton using the function
 * Return: 0
 *
 */
void more_numbers(void)
{
int b, c, d;
for (c = 0 ; c <= 10 ; c++)
{
for (b = 0; b <= 14 ; b++)
{
if (b > 9)
{
d = b % 10;
_putchar(49);
_putchar(d + 48);
}
else
{
_putchar(b + 48);
}
}
_putchar('\n');
}
}
