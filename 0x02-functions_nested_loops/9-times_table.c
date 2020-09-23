#include "holberton.h"
/**
 * times_table - This program will print using _putchar function
 *
 * Description: prints Holberton using the function
 * Return: 0
 *
 */
void times_table(void)
{
int a, b, c, d, e;
for (a = 0; a <= 9 ; a++)
{
for (b = 0; b <= 9 ; b++)
{
if (b == 0)
{
_putchar(48);
}
else
{
c = a * b;
if ( c >= 10 )
{
d = c;
while (d >= 10 )
{
d = d /10;
}
e = c % 10;
_putchar(',');
_putchar(' ');
_putchar(d+48);
_putchar(e+48);
}
else 
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(c+48);
}
}
}
_putchar(10);
}
}
