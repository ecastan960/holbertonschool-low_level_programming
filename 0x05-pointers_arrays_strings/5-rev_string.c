#include "holberton.h"

/**
 * rev_string - This program will print using _putchar function
 * @s: string
 * Description: prints Holberton using the function
 * Return: 0
 *
 */

void rev_string(char *s)
{
int a, b;
char *s1, *s2, c;
s1 = s;
s2 = s;
for (a = 0; s[a] != '\0'; ++a)
{
}
for (b = 0; b < a - 1; b++)
{
s1++;
}
for (b = 0; b < (a - 1) / 2; b++)
{
c = *s1;
*s1 = *s2;
*s2 = c;
s1--;
s2++;
}
}
