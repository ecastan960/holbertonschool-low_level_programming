#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - This program will print using _putchar function
 * @dest: array
 * @src: number
 * Description: prints Holberton using the function
 * Return: s
 *
 */

char *_strcpy(char *dest, char *src)
{
char *s = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (s);

}
