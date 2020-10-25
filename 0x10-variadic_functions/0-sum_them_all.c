#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that sums up numbers.
 *
 * @n: Size of assigments
 * Description: returns the sum of all the parameters.
 * Return: s
 */


int sum_them_all(const unsigned int n, ...)
{
int i, s = 0;
va_list sum;
if (n != 0)
{
va_start(sum, n);
for (i = 0; i < n; i++)
{
s = s + va_arg(sum, int);
}
return (s);
va_end(sum);
}
return (0);
}
