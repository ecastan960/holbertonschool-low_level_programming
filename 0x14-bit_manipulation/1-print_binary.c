#include "holberton.h"
#include <stdio.h>

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


	while (n > x)
	{
		x = x * 2;
		s++;
	}
	if (n > 1)
	{
		s = s - 1;
	}
	for (i = 0; i < s; i++)
	{
		if (n >= binary(s - i))
		{
			_putchar('1');
			num = num - binary(s - i);
		}
		else
		{
			_putchar('0');
		}
	}
}
