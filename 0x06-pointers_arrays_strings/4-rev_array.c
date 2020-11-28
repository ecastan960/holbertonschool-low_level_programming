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
	int  i, temp, b = 1;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - b];
		a[n - b] = temp;
		b++;
	}

}
