
#include <stdlib.h>

/**
 * int_index - function that searches for an integer.
 *
 * @array: Array to use
 * @size: Size of array
 * @cmp: Point function
 * Description: returns index if an integer its find, else -1
 * Return: i
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i, c = 0;
if (size <= 0)
{
return (-1);
}
else
{
if (array != NULL && cmp != NULL)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
c = 1;
}
}
if (c == 0)
{
return (-1);
}
}
}
return (0);
}
