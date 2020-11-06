#include <stdio.h>
#include "holberton.h"

/**
 * get_endianness- function that inserts a new node
 *
 *
 * Return: 1 little or 0 if big endian
 */


int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int)*c);
}
