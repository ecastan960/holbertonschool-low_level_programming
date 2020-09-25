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
int n,c;
for (n = 1 ; n <= 100 ; n++)
{
c = 0;
if (n == 1)
{
printf("%d",n);
}
else if (n % 5 == 0 && n % 3 == 0)
{
printf(" FizzBuzz");
c = 1;
}
else if (n % 3 == 0 && c == 0)
{
printf(" Fizz");
c = 1;
}
else if (n % 5 == 0 && c == 0)
{
printf(" Buzz");
c = 1;
}
else if (c == 0)
{
printf(" %d",n);
}
}
printf("\n");
return(0);
}