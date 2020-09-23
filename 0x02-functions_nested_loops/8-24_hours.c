#include "holberton.h"

/**
 * jack_bauer - This program will print using _putchar function
 *
 * Description: prints Holberton using the function
 * Return: 0
 *
 */
void jack_bauer(void)
{
int a;
int b;
int c;
int d;
for (a = 0; a < 3; a++)
{
if (a <2)
{
for (b = 0; b < 10; b++)
{
for (c = 0; c < 6; c++)
{
for (d = 0; d < 10; d++)
{
_putchar(a + 48);
_putchar(b + 48);
_putchar(':');
_putchar(c + 48);
_putchar(d + 48);
_putchar(10);
}
}
}
}
else
{
for (b = 0; b < 4; b++)
{
for (c = 0; c < 6; c++)
{
for (d = 0; d < 10; d++)
{
_putchar(a + 48);
_putchar(b + 48);
_putchar(':');
_putchar(c + 48);
_putchar(d + 48);
_putchar(10);
}
}
}
}

}
}
