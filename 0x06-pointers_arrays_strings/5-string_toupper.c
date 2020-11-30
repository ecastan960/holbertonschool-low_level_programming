#include "holberton.h"
#include <stdio.h>
/**
 * string_toupper - This program will print using _putchar function
 * Description: prints Holberton using the function
 * @s: Input string
 * Return: s
 *
 */

char *string_toupper(char *s)
{
	int  i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
