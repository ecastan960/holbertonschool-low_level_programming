/**
 * title - This program will assign a random number
 * if the number is positive, negative or zero.
 * main - random number
 * Return: 0
 * Description: prints number
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main(void) - Short description, single line
 * @n: Description of parameter x
 *
 * Description: Longer description of the function
 *
 * Return: Description of the returned value
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
return (0);
}
