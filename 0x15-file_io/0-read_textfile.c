#include "holberton.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * read_textfile - check the code for Holberton School students.
 *
 * @filename: Pointer to filaname
 * @letters: number of character in file
 *
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int i = letters, a = 1;
	char c;
	FILE *fname = fopen(filename, "r");

	if (filename == NULL)
		return (0);

	while ((c = fgetc(fname)) != EOF && a < i)
	{
		_putchar(c);
		a++;
	}
	fclose(fname);

	return (a);
}
