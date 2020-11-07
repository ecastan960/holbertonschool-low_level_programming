#include "holberton.h"
#include <stdio.h>
#define ULONG_MAX 0xFFFFFFFFFFFFFFFF

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
 * print_binary- function that inserts a new node
 *
 * @n: string containing the binary number
 *
 * Return: Nth node
 */


void print_binary(unsigned long int n)
{
	unsigned long int x = 1, s = 1, i, num = n;
	int r = 0, r1 = 0;

	if (n == 4294967295)
	{
		for (i = 0; i < 64; i++)
			_putchar('1');
		r1 = 1;
	}
	while (n > x && r1 == 0)
	{
		x = x * 2;
		s++;
		if (n == x)
		{
			for (i = 0; i < s; i++)
			{
				if (i == 0)
					_putchar('1');
				else
					_putchar('0');
			}
			r = 1;
		}
	}
	if (n > 1)
		s--;
	if (r == 0 && r1 == 0)
	{
		for (i = 0; i < s; i++)
		{
			if (num >= binary(s - i))
			{
				_putchar('1');
				num = num - binary(s - i);
			}
			else
				_putchar('0');
		}
	}
}
