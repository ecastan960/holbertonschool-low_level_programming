#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - Function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size of memory allocate
 * Description: prints Holberton using the function
 * Return: s
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int b, c = 0, size1 = 0, size2 = 0;
char *a;
if (s1 == NULL)
{
*s1 = ' ';
}
if (s2 == NULL)
{
*s2 = ' ';
}
while (s1[size1] != 0)
{
size1++;
}
while (s2[size2] != 0)
{
size2++;
}
if (n < size2)
{
size2 = n;
}

a = malloc((size1 + size2 + 1) * sizeof(char));
if (a == NULL)
{
return (NULL);
}
if (a == 0)
{
return (0);
}
for (b = 0; b < size1; b++)
{
a[b] = s1[b];
}
for (c = 0; c <= size2; c++)
{
a[b + c] = s2[c];
}
return (a);
}
