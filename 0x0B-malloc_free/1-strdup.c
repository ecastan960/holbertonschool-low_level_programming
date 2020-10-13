#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - This program will print using _putchar function
 * @str: size of array of char
 * Description: prints Holberton using the function
 * Return: s
 *
 */

char *_strdup(char *str)
{
int b, size = 0;
char *a;
if (str == 0)
{
return (0);
}
while (str[size] != 0)
{
size++;
}
else
{
a = malloc((size + 1) *sizeof(char));
if (a == 0)
{
return (0);
}
for (b = 0; b <= size; b++)
{
a[b] = str[b];
}
return (a);
}
}
