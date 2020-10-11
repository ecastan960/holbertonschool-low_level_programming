#include <stdio.h>

/**
 * main - writes the character c to stdout
 * @argc: unused
 * @argv: name of program
 *
 * Return: i.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
int i = 0;
while (argv[i])
{
printf("%s\n", argv[i]);
i++;

}
return (i);
}
