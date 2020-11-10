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

	int i = letters, a = 1, fname;


	char *p = (char *)malloc(i * sizeof(char) + 1);
	fname = open(filename, O_RDONLY, 0600);

	if (filename == NULL)
		return (0);

	if (fname == -1)
		return (0);


	read(fname, p, i);

	p[i+1]= '\0';

	_putchar(p[0]);

	close(fname);

	return (a);
}
