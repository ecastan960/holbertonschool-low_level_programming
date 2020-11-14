#include "holberton.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>


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

	int fname, n = 1, a;


	while (text_content[n] && text_content != NULL)
	{
		n++;
	}

	if (text_content == NULL)
		n = 0;

	if (filename == NULL)
		return (-1);

	fname = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fname == -1)
	{
		return (-1);
	}

	a = write(fname, text_content, n);
	if (a == -1)
		return (-1);
	close(fname);
	return (1);

}
