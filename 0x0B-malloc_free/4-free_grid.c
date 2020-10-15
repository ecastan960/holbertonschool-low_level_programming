#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - This program creates an array
 * @grid: width of the array
 * @height: height of the array
 * Description: prints Holberton using the function
 * Return: s
 *
 */

void free_grid(int **grid, int height)
{
int a;
if (grid == NULL || height == 0)
{
free(grid);
}
else
{
for (a = 0; a < height; a++)
{
free(grid[a]);
}
}
}
