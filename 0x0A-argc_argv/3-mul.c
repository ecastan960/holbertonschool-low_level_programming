#include <stdio.h>
#include <stdlib.h>

/**
 * main - writes the character c to stdout
 *
 * @argc: unused
 * @argv: name of program
 *
 *
 * Return: i.
 */

int main(int argc, char *argv[])
{
if (argc == 3)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
else
{
printf("Error\n");
return (1);
}
}

