#include <stdio.h>

/**
 * main - This program will print using _putchar function
 *
 * Description: prints Holberton using the function
 * Return: 0
 *
 */

int main(void)
{
long int a, c = 0, n = 612852475143;
a = 2;
while (c == 0)
{
if (n % a == 0)
{
n = n / a;
}
else
{
a = a + 1;
}
if (a / n == 1)
{
c = 1;
}
}
printf("%ld", a);
printf("\n");
return (0);
}
