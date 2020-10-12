#include <stdio.h>

/**
 * main - writes the character c to stdout
 *
 * @argc: unused
 * @argv: name of program
 *
 * Return: 0.
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
int i = 0;
while (argv[i])
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
