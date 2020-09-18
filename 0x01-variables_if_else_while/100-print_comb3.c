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
int m = '0';
int con = '1';
for (l = '0' ; l < '9' ; l++)
{
int c = ',';
int s = ' ';
while (m <= '9')
{
if (l > '0' && m < con)
{
m = con;
}
putchar(l);
putchar(m);
if (l == '8' && m == '9')
{

}
else
{
putchar(c);
putchar(s);
}
m++;
}
con++;
m = '0';
}
putchar('\n');
return (0);
}
