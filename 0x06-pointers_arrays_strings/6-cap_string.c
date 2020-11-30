#include "holberton.h"

/**
 * cap_string - This program will print using _putchar function
 * Description: prints Holberton using the function
 * Return: s
 *
 */

char *cap_string(char *s)
{
	int  i = 0;

	while (s[i] != '\0')
	{
		if (i == 0)
		{
			if (s[i] > 96 && s[i] < 123)
			{
				s[i] = s[i] - 32;
			}
		}
		if (s[i] == ' ')
		{
			if (s[i + 1] > 96 && s[i + 1] < 123)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		i++;
	}
	return (s);
}
