#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint- function that inserts a new node
 *
 * @b: string containing the binary number
 *
 * Return: Nth node
 */


unsigned int binary_to_uint(const char *b)
{
	int n = 0, i;
	unsigned int c = 0, x;
	const char *p;

	if (b == NULL)
		return (0);

	p = b;

	while (p[n] != '\0')
	{
		n++;
	}

	for (i = n; i > 0; i--)
	{
		if (p[i - 1] != '0' && p[i - 1] != '1')
		{
			return (0);
		}
		if (i == n)
		{
			x = 1;
		}
		else
		{
			x = x * 2;
		}

		if (p[i - 1] == '1')
		{
			c = c + x;
		}
	}
	return (c);
}
