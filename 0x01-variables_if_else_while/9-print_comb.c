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
for (l = '0' ; l <= '9' ; l++)
{
int c = ',';
int s = ' ';
putchar(l);
if (l < '9')
{
putchar(c);
putchar(s);
}
}
putchar('\n');
return (0);
}
