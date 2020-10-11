#include <stdio.h>

/**
 * main - writes the character c to stdout
 * @argc: unused
 * @argv: name of program
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
