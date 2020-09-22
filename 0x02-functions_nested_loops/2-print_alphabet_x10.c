#include "holberton.h"
/**
 * print_alphabet_x10 - This program will print using _putchar function
 *
 * Description: prints Holberton using the function
 * Return: 0
 *
 */
void print_alphabet_x10(void)
{
int c;
int b;
for (b = 0; b < 10 ; b++)
{
for (c = 'a'; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
