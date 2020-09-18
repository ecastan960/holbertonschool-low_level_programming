/**
 * main - This program will assign a random number
 * if the number is positive, negative or zero.
 *
 * Description: prints numbers
 * and the prints if it is positive,negative or zero
 * Return: 0
 *
 */
#include <stdio.h>
int main(void)
{
int l;
for (l = 'a' ; l <= 'z' ; l++)
{
putchar(l);
}
for (l = 'A' ; l <= 'Z' ; l++)
{
putchar(l);
}
putchar('\n');
return (0);
}
