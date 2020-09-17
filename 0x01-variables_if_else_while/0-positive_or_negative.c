/**
 *This program will assign a random number to the variable n and prints
 *if the number is positive, negative or zero.
 */
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints a number and mentions if it is posivite, negative or zero
 * @n : This variables stores a random number
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n > 0)
{
printf("%d is positive\n", n);
}
else
{
printf("is zero\n");
}
}
