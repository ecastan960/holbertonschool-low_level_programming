/**
 * main - This program will print using _putchar function
 *
 * Description: prints Holberton using the function
 * Return: 0
 *
 */
#include "holberton.h"
int main(void)
{
int a;
char h[] = "Holberton";
for (a = 0; a <= 8 ; a++)
{
_putchar(h[a]);
}
_putchar('\n');
return (0);
}
