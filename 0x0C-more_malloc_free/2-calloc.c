#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - Function that concatenates two strings
 * @nmemb: first string
 * @size: second string
 * Description: prints Holberton using the function
 * Return: s
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
long int *p;
unsigned int a;
long int b, c;
b = nmemb;
c = size;
if (b == 0)
{
return (NULL);
}
if (c == 0)
{
return (NULL);
}
p = malloc(b * c);
if (p == NULL)
{
return (NULL);
}
for (a = 0; a < b; a++)
{
p[a] = 0;
}
return (p);
}
