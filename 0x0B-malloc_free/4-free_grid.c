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
int a = 0, b = 0;
while (grid[a] != 0)
{
for (b = 0; b < height; b++)
{
free(grid[b]);
}
a++;
}
free(grid);
}
