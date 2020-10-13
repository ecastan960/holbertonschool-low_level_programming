#include <stdio.h>

/**
 * main - writes the character c to stdout
 *
 * @argc: unused
 * @argv: name of program
 *
 * 
 * Return: i.
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
int n1 = 1, n2 = 0, a, b = 1, n = 0, c, d = 10;
int num[2] = {1, 1};
while (argv[n1])
{
n1++;
}
n1 = n1 - 1;
if (n1 < 2)
{
printf("error\n");
return (1);
}
else
{
for (a = 1; a <= 2; a++)
{
while (argv[a][n2])
{
n2++;
}
if (argv[a][0] == 45)
{
b = -1;
n = 1;
}
else
{
b = 1;
}
for (c = n2 - 1; c >= n; --c)
{
if (c == n2 - 1)
{
num[a - 1] = argv[a][c] - 48;
}
else
{
num[a - 1] = ((argv[a][c] - 48) * (d)) + num[a - 1];
d = d * 10;
}
}
num[a - 1] *= num[a - 1] * b;
n2 = 0;
d = 10;
}
printf("%d\n", num[1] * num[0]);
return (0);
}
}

