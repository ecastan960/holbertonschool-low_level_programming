#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit- function that inserts a new node
 *
 * @n: string containing the binary number
 * @index: string containing the binary number
 *
 * Return: bit
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1, result;
	unsigned int count = 0;

	if (n == NULL)
		return (-1);
	while (count < index)
	{
		x = x * 2;
		count++;
	}
	if (x < *n)
	{
		result = x + *n;
		n = &result;
		return (1);
	}
	else
	{
		result = x;
		n = &result;
		return (1);
	}
	return (1);
}
