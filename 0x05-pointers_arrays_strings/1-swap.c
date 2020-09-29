#include "holberton.h"


/**
 * swap_int - This program will print using _putchar function
 * @a: number to swap
 * @b: number to swap
 * Description: prints Holberton using the function
 * Return: 0
 *
 */
void swap_int(int *a, int *b)
{
int c, d;
c = *a;
d = *b;
*a = d;
*b = c;
}
