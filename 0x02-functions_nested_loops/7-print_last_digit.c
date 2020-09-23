#include "holberton.h"

/**
 * print_last_digit - This program will print using _putchar function
 * @n: The character to evaluate
 *
 * Description: prints Holberton using the function
 * Return: 0
 *
 */
int print_last_digit(int n)
{
int a;
int b;
if (n < 0)
{
n = n * -1;
a = n % 10;
b = a + 48;
_putchar(b);
return (a);
}
else if (n > 0)
{
a = n % 10;
b = a + 48;
_putchar(b);
return (a);
}
else if (n == 0)
{
a = n % 10;
b = a + 48;
_putchar(b);
return (a);
}
return (0);
}
