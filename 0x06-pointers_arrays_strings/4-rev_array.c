#include "holberton.h"

/**
 * reverse_array - This program will print using _putchar function
 * @a: string
 * @n: string
 * Description: prints Holberton using the function
 * Return: s
 *
 */

void reverse_array(int *a, int n)
{
int d = 0, b, e = n;
int *c;
for (d = 0; d < n; d++)
{
c[d] = a[d];
}

for (b = 0; b < n; b++)
{
a[b] = c[e - 1];
e = e - 1;
}
}
