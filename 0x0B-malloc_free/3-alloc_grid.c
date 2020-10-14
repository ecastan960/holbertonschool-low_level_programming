#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - This program creates an array
 * @width: width of the array
 * @height: height of the array
 * Description: prints Holberton using the function
 * Return: s
 *
 */

int **alloc_grid(int width, int height)
{
int a, b;
if (width <= 0 || height <= 0)
{
return (0);
}
else
{
int **array = (int **)malloc(height * sizeof(int *));
if (array == 0)
{
return (0);
}
for (a = 0; a < height; a++)
{
array[a] = (int *)malloc(width * sizeof(int *));
}
if (array == 0)
{
free(array);
return (0);
}
for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
{
array[a][b] = 0;
}
}
return (array);
}
}
