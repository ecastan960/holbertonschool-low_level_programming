#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - This program concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Description: prints Holberton using the function
 * Return: s
 *
 */

char *str_concat(char *s1, char *s2)
{
int b, c = 0, size1 = 0, size2 = 0;
char *a;
while (s1[size1] != 0)
{
size1++;
}
while (s2[size2] != 0)
{
size2++;
}
a = malloc((size1 + size2 + 1) * sizeof(char));
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
