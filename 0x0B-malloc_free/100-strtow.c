#include "holberton.h"
#include <stdlib.h>
/**
 * strtow - This program will print using _putchar function
 * @str: size of array of char
 * Description: prints Holberton using the function
 * Return: s
 *
 */

char **strtow(char *str)
{
unsigned int b, size;
char *c;
if (size <= 0)
{
return (0);
}
else
{
str = (char *)malloc(size * sizeof(char));
if (str == 0)
{
return (0);
}
for (b = 0; b < size; b++)
{
str[b] = c;
}
return (str);
}
}
