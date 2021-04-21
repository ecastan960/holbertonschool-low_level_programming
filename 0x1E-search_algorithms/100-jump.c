#include "search_algos.h"
#include <math.h>
/**
 * l_search - linear search algorithm
 *
 * @array: pointer to the first element of the array to search
 * @left: First index to search
 * @right: Last index to serach
 * @value: Value to be found inside the array
 * Return: Index location of value inside array or -1
 * if its not found
 */
size_t l_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	for (i = left; i <= right; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

/**
 * jump_search - binary search algorith
 *
 * @array: pointer to the first element of the array to search
 * @size: Number of elements inside the array
 * @value: Value to be found inside the array
 * Return: Index location of value inside array or -1
 * if its not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t j = sqrt(size), index = 0;

	if (array == NULL)
		return (-1);

	while (index <= size - 1)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		else if (array[index + j] >= value || index + 1 == size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", index, index + j);
			if (index + 1 == size)
				index = l_search(array, index, size - 1, value);
			else
				index = l_search(array, index, index + j, value);
			return (index);
		}
		else
			index = index + j;
	}
	return (-1);
}
