#include "holberton.h"

/**
 * string_toupper - This program will print using _putchar function
 * Description: prints Holberton using the function
 * Return: s
 *
 */

char *string_toupper(char * s)
{
	int  i = 0, temp, b = 1;

	while (s[i] != NULL)
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
