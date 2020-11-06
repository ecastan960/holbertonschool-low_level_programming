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
	unsigned int a = 1;
	char *b = (char *) &a;

	return ((int)*b);
}
