#include "search_algos.h"
/**
 * linear_search - Linear search of a value in an array
 *
 * @array: Array of values
 * @size: Size of the array
 * @value: Value to be found inside the array
 * Return: Index location of value inside array or -1
 * if its not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
