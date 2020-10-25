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
const char *s;
va_list pa;
s = separator;
if (n == 0)
{
printf("\n");
return;
}
if (n != 0 && s != 0)
{
va_start(pa, n);
for (i = 0; i < n ; i++)
{
if (i < n - 1)
{
printf("%d%c ", va_arg(pa, int), *separator);
}
if (i == n - 1)
{
printf("%d\n", va_arg(pa, int));
}
va_end(pa);
}
}
}
