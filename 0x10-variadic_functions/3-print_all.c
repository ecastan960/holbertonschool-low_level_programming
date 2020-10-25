#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * form - function that selects the formating to use.
 *
 * @d: format letter
 *
 * Description: Functions that selects format base on a letter.
 * Return: String with the appropiate format.
 */

char *form(int d)
{
switch (d)
{
case 99:
return ("%c");
case 105:
return ("%d");
case 102:
return ("%f");
case 115:
return ("%s");
}
return (0);
}

/**
 * print_all - function that prints stuff.
 *
 * @format: format of variables to print
 *
 * Description: prints variables depending the format.
 */

void print_all(const char * const format, ...)
{
int i = 0, c = 0, n = 0;
char *str;
va_list print;
str = (char *)malloc(sizeof(char));
while (format[n])
{
if (form(format[n]) != 0)
{
str[c] = format[n];
str = (char *)realloc(str, (c+2)*sizeof(char));
c = c + 1;
}
n++;
}

va_start(print, format);
while (i < c)
{
char *s = form(str[i]);
char *d = va_arg(print, int*);
printf(s, d);
if (i < c - 1)
{
printf(", ");
}
i++;
}
printf("\n");
}
