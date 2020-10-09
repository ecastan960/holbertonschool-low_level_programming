#include "holberton.h"

/**
 * aux - This program will print using _putchar function
 * @n: array
 * @a: array
 * Description: prints Holberton using the function
 * Return: s
 *
 */

int aux(int n, int a)
{
if (n <= 0)
{
return (0);
}
if (n == 1)
{
return (0);
}
if (a < n)
{
if (n % a == 0)
{
return (0);
}
if (n % a != 0)
{
return (aux(n, ++a));
}

}
if (a == n)
{
return (1);
}
return (0);
}

/**
 * _sqrt_recursion - This program will print using _putchar function
 * @n: array
 * Description: prints Holberton using the function
 * Return: s
 *
 */

int is_prime_number(int n)
{
int a = 2, b;
b = aux(n, a);
return (b);
}
