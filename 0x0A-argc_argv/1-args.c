#include <stdio.h>

/**
 * main - writes the character c to stdout
 *
 * @argc: unused
 * @argv: name of program
 *
 * Return: i.
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
int i = 0;
while (argv[i])
{
i++;
}
printf("%d\n", i - 1);
return (0);
}
