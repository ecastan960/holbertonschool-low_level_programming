#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits- function that inserts a new node
 *
 * @n: string containing the binary number
 * @m: string containing the binary number
 *
 * Return: bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = 1, result;
	unsigned int count = 0;

	while (count < m)
	{
		x = x * 2;
		count++;
	}
	if (x < n)
	{
		result = x + n;
		return (result);
	}
	else
	{
		result = x;
		return (result);
	}
	return (1);
}