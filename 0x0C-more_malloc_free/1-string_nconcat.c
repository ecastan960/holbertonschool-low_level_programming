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
unsigned int b, c = 0, si1 = 0, si2 = 0;
char *a;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[si1] != 0)
{
si1++;
}
while (s2[si2] != 0)
{
si2++;
}
if (n < si2)
{
si2 = n;
}

a = malloc((si1 + si2 + 1) * sizeof(char));
if (a == 0)
{
return (0);
}
for (b = 0; b < si1; b++)
{
a[b] = s1[b];
}
for (c = 0; c <= si2; c++)
{
a[b + c] = s2[c];
}
return (a);
}
