#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - This program will print using _putchar function
 * @b: size of memory allocate
 * Description: prints Holberton using the function
 * Return: s
 *
 */

void *malloc_checked(unsigned int b)
{
long int *p;
p = (long int *)malloc(b);
if (p == 0)
{
*p = 98;
return (p);
}
return (p);
}
