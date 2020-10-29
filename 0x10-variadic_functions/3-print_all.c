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
	int i = 0, sep = 0;
	char *str;
	va_list print;

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
			str = va_arg(print, char*);
			if (str != 0)
				printf("%s", str), i++, sep = 1;
			else
				printf("(nil)");
		default:
			i++, sep = 0;
			break;
		}
		if (format[i] != '\0' && sep == 1)
		{
			printf(", ");
		}
	}
	va_end(print);
	printf("\n");
}
