#include "holberton.h"
#include <stdio.h>

/**
 * print_array - This program will print using _putchar function
 * @a: array
 * @n: number
 * Description: prints Holberton using the function
 * Return: 0
 *
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n ; i++)
{
if (i == 0)
{
printf("%d", a[0]);
}
else if (i > 0 && i < n)
{
printf(", %d", a[0]);
}
a++;
}
printf("\n");
}
