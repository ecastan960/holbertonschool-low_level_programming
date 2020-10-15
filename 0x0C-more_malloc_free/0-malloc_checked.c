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
void *p;
p = (void *)malloc(b);
if (p == NULL)
{
free(p);
exit(98);
}
return (p);
}
