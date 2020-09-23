#include "holberton.h"
/**
 * _isalpha - This program will print using _putchar function
 * @c: The character to evaluate
 *
 * Description: prints Holberton using the function
 * Return: 0
 *
 */
int _isalpha(int c)
{
if (c > 65 && c < 90)
{
return (1);
}
else if (c > 97 && c < 122)
{
return (1);
}
else
{
return (0);
}
}
