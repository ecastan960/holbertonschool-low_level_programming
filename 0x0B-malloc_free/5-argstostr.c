#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - This program creates an array
 * @ac: width of the array
 * @av: height of the array
 * Description: prints Holberton using the function
 * Return: s
 *
 */

char *argstostr(int ac, char **av)
{
int a = 0;


char *s = (char *)malloc(ac * sizeof(char));
for (a = 0; a < ac; a++)
{
s[a] = *av[a];
}
return (s);
}
