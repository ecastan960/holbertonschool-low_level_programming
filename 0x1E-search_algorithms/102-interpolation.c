#include "search_algos.h"
#include <math.h>
/**
 * interpolation_search - Interpolation search algorith
 *
 * @array: pointer to the first element of the array to search
 * @size: Number of elements inside the array
 * @value: Value to be found inside the array
 * Return: Index location of value inside array or -1
 * if its not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos, last_arg;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
			{
				printf("Value checked array[%ld] = [%d]\n", low, array[low]);
				return (low);
			}
			return (-1);
		}
		last_arg = (value - array[low]);
		pos = low + (((double)(high - low) / (array[high] - array[low])) * last_arg);
		if (array[pos] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			return (pos);
		}
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	}
	if (value > array[high])
	{
		last_arg = (value - array[low]);
		pos = low + (((double)(high - low) / (array[high] - array[low])) * last_arg);
		printf("Value checked array[%ld] is out of range\n", pos);
	}
	return (-1);
}
