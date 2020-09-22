/**
 * main - This program will assign a random number
 * if the number is positive, negative or zero.
 * @c: The character to print
 * Description: prints numbers
 * and the prints if it is positive,negative or zero
 * Return: 0
 *
 */
#include <stdio.h>
#include <unistd.h>
int _putchar(char c);
char h[] = "Holberton";
int main(void)
{
int a;
for (a = 0; a <= 8 ; a++)
{
_putchar(h[a]);
}
_putchar('\n');
return (0);
}
