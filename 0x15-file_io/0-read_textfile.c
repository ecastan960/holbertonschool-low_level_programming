#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

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