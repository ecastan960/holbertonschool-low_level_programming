#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - This program will print using _putchar function
 * @size: size of array of char
 * @c: Character to initialize array
 * Description: prints Holberton using the function
 * Return: s
 *
 */

char *create_array(unsigned int size, char c)
{
unsigned int b;
char *a;
if (size == 0)
{
return (0);
}
else
{
a = (char *)malloc(size * sizeof(char));
for (b = 0; b < size; b++)
{
a[b] = c;
}
return (a);
}
}
