#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


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

	int i = letters, a = 0;
	char *p = (char *)malloc(i * sizeof(char));
	FILE *fname;

	if (filename == NULL)
		return (0);
	fname = fopen(filename, "r");
	if (!fname)
		return (0);
	while (fgets(p, i, fname))
		printf("%s\n", p);
	fclose(fname);

	return (a);
}
