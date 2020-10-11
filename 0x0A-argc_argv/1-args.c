#include <stdio.h>

/**
 * main - writes the character c to stdout
 * @argc: unused
 * @argv: name of program
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
int i = 0;
while (argv[i])
{
i++;
}
printf("%d\n", i - 1);
return (i);
}
