#include "holberton.h"

/**
 * aux1 - This program will print using _putchar function
 * @s: array
 * @a: array
 * Description: prints Holberton using the function
 * Return: s
 *
 */

int aux1(char *s, int a)
{
if (*s == 0)
{
return (a);
}
if (*s != 0)
{
return (aux1(++s, ++a));
}
return (0);
}


/**
 * aux2 - This program will print using _putchar function
 * @s: array
 * @b: array
 * @c: array
 * @d: array
 * Description: prints Holberton using the function
 * Return: s
 *
 */

int aux2(char *s, int b, int c, int d)
{
char *e;
if (c <= (b / 2))
{
e = s + (d - c);
if (*s == *e)
{
return (aux2(++s, b, ++c, --d));
}
else
{
return (0);
}
}
return (1);
}

/**
 * is_palindrome - This program will print using _putchar function
 * @s: array
 * Description: prints Holberton using the function
 * Return: s
 *
 */

int is_palindrome(char *s)
{
int a = 0, b, c = 1, d;
b = aux1(s, a);
d = b;
c = aux2(s, b, c, d);
return (c);
}
