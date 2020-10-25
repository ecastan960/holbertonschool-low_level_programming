#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings.
 *
 * @n: Size of assigments
 * @separator: character separator to use
 *
 * Description: returns the sum of all the parameters.
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list prints;

va_start(prints, n);

for (i = 0; i < n ; i++)
{
	char *s = va_arg(prints, char*);

	if (s == NULL)
	{
		printf("(nil)");
	}
	if (i < n - 1 && s != 0)
	{
		printf("%s%c ", s, *separator);
	}
	if (i == n - 1)
	{
		printf("%s\n", s);
	}
	va_end(prints);
}
}
