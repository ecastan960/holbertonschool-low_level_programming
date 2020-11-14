#include "holberton.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - function that read data from file to print on terminal
 *
 * @filename: Pointer to filaname
 * @letters: number of character in file
 *
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int i = letters, fname, c, d;
	char *p = NULL;

	if (filename == NULL)
		return (0);

	fname = open(filename, O_RDONLY);

	if (fname == -1)
		return (0);

	p = malloc(i * sizeof(char));
	if (p == NULL)
		return (0);

	d = read(fname, p, i);
	if (d == -1)
	{
		free(p);
		return (0);
	}


	c = write(STDOUT_FILENO, p, d);
	if (c == -1)
	{
		free(p);
		return (0);
	}

	free(p);
	close(fname);

	return (c);
}
