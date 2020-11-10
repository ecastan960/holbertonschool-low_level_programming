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

	int i = letters, a = 1, fname, b = 0, c, d;
	char *p = (char *)malloc(i * sizeof(char) + 1);

	fname = open(filename, O_RDONLY, 0600);

	if (filename == NULL)
		return (0);

	if (fname == -1)
		return (0);


	d = read(fname, p, i);
	if (d < 0)
		return (0);
	p[i + 1] = '\0';
	while (p[b])
	{
		c = write(STDOUT_FILENO, &p[b], 1);
		if (c < 0)
			return (0);
		b++;
		a++;
	}
	close(fname);

	if (b == i)
		a--;

	return (a);
}
