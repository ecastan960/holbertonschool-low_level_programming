#include <stdio.h>
#include "holberton.h"

/**
 * binary- function that finds int equivalent
 *
 * @n: number of spaces
 *
 * Return: Nth node
 */
unsigned long int binary(int n)
{
	int i;
	unsigned long int  x = 1;

	for (i = 0; i < n - 1; i++)
	{
		x = x * 2;
	}
	return (x);
}

/**
 * get_bit- function that inserts a new node
 *
 * @n: string containing the binary number
 * @index: string containing the binary number
 *
 * Return: bit
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = 1, s = 1, i, num = n;
	unsigned int count;
	int r = 0;

	while (n > x)
	{
		x = x * 2;
		s++;
		if (n == x)
		{
			if (index == s -1)
				return (1);
			else
				return (0);
			r = 1;
		}
	}
	if (n > 1)
		s--, count = s;
	if (r == 0)
	{
		for (i = 0; i < s; i++)
		{
			if (num >= binary(s - i))
			{
				num = num - binary(s - i);
				if (count == index)
					return (1);
				count--;
			}
			else
				if (count == index)
					return (0);
				count--;
		}
	}
	return (0);
}
