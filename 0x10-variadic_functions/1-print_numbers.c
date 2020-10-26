#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that sums up numbers.
 *
 * @n: Size of assigments
 * @separator: character separator to use
 *
 * Description: returns the sum of all the parameters.
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list pa;
va_start(pa, n);
for (i = 0; i < n ; i++)
{
	printf("%d", va_arg(pa, int));
	if (i < n - 1 && separator != NULL)
	{
		printf("%s", separator);
	}
}
va_end(pa);
printf("\n");

}
