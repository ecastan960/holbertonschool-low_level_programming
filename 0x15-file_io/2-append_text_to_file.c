#include "holberton.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>


/**
 * append_text_to_file - function that creates a file with text
 *
 * @filename: Pointer to filaname
 * @text_content: content of the file
 *
 * Return: Always 0.
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int fname, n = 0, a;

	while (text_content[n])
	{
		n++;
	}

	if (filename)
		return (-1);

	fname = open(filename, O_RDWR | O_APPEND, 0600);

	if (fname == -1)
	{
		return (-1);
	}

	a = write(fname, text_content, 0);
	if (a == -1)
		return (-1);
	close(fname);
	return (1);

}
