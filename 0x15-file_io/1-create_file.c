#include "holberton.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - function that creates a file with text
 *
 * @filename: Pointer to filaname
 * @text_content: content of the file
 *
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{

	int fname;

	if (filename)
		return (-1);

	fname = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fname == -1)
	{
		return (-1);
	}
	write(fname, text_content, 10);

	close(fname);
	return (1);

}
