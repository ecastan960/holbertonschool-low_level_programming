
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
int i;
if (array != NULL && cmp != NULL && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}
return (-1);
}
