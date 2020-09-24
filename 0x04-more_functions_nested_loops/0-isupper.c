#include "holberton.h"

/**
 * _isupper - This program will print using _putchar function
 * @c: input character
 *
 * Description: prints Holberton using the function
 * Return: 0
 *
 */
int _isupper(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
