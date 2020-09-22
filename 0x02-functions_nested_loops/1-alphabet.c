#include "holberton.h"
/**
 * print_alphabet - This program will print using _putchar function
 *
 * Description: prints Holberton using the function
 * Return: 0
 *
 */
void print_alphabet(void)
{
int a;
for (a = 'a'; a <= 'z' ; a++)
{
_putchar(a);
}
_putchar('\n');
}
