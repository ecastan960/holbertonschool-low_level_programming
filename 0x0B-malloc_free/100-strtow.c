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
int a = 0, size = 0;
if (str == 0 || str == 45)
{
return (0);
}
else
{
while (str[size] != 0)
{
size++;
}
char **s = (char **)malloc(size *sizeof(char *));
for (a = 0; a < ac; a++)
{
s[a] = *av[a];
}
}
return (s);
}
