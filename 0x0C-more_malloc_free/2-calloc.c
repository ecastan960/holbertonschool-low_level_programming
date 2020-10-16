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
int *p;
unsigned int a;
p = malloc(nmemb * size);
if (p == NULL)
{
return (NULL);
}
for (a = 0; a < nmemb; a++)
{
p[a] = 0;
}
return (p);
}
