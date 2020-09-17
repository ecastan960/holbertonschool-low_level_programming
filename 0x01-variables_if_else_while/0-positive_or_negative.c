/**
 *This program will assign a random number to the variable n
 */
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This is a description
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n<0)
{
    printf("%d is negative\n",n);
}
else if (n>0)
{
    printf("%d is positive\n",n);
}
else
{
    printf("is zero\n");
}
return (0);
}
