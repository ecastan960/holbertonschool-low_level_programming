#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints stuff.
 *
 * @format: format of variables to print
 *
 * Description: prints variables depending the format.
 */

void print_all(const char * const format, ...)
{
	int i = 0, n = 0, sep = 0;
	va_list print;

	while (format[n])
		n++;
	va_start(print, format);
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c",  va_arg(print, int)), i++, sep = 1;
			break;
		case 'i':
			printf("%d",  va_arg(print, int)), i++, sep = 1;
			break;
		case 'f':
			printf("%f", va_arg(print, double)), i++, sep = 1;
			break;
		case 's':
			printf("%s", va_arg(print, char*)), i++, sep = 1;
			break;
                case 0:
                        printf("(nil)");
		default:
			i++, sep = 0;
			break;
		}
		if (i < n && sep == 1)
		{
			printf(", ");
		}
	}
	va_end(print);
	printf("\n");
}
