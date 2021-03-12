
#include <stdlib.h>

/**
 * array_iterator - writes the character c to stdout
 *
 * @array: Array to use
 * @size: Size of array
 * @action: Point function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
