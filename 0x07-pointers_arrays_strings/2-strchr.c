#include "holberton.h"

/**
 * _strchr - This program will print using _putchar function
 * @s: array
 * @c: number
 * Description: prints Holberton using the function
 * Return: char
 *
 */

char *_strchr(char *s, char c)
{
while (*s != c)
{
s++;
}
return (s);
}
