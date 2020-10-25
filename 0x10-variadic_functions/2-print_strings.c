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
const char *s;
va_list prints;
s = separator;
if (n != 0)
{
va_start(prints, n);
for (i = 0; i < n ; i++)
{
if (i < n - 1)
{
if (s != 0)
{
printf("%s%c ", va_arg(prints, char*), *separator);
}
else
{
printf("%s ", va_arg(prints, char*));
}
}
if (i == n - 1)
printf("%s\n", va_arg(prints, char*));
}
va_end(prints);
}
}
