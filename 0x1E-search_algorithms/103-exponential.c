#include "search_algos.h"
#include <math.h>
/**
 * print_array - print a section of an array
 *
 * @array: pointer to the first element of the array to search
 * @index_f: First index of the array to print
 * @index_l: Last index of the array to print
 */
void print_array(int *array, size_t index_f, size_t index_l)
{
	size_t i;

	printf("Searching in array: ");
	for (i = index_f; i < index_l; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[index_l]);
}

/**
 * binary_s - binary search algorith
 *
 * @array: pointer to the first element of the array to search
 * @index_f: Index on the left side of the subarray
 * @index_l: Index on the right side of the subarray
 * @value: Value to be found inside the array
 * Return: Index location of value inside array or -1
 * if its not found
 */

int binary_s(int *array, size_t index_f, size_t index_l, int value)
{
	size_t middle;

	if (array == NULL)
		return (-1);
	print_array(array, index_f, index_l);
	while (index_f <= index_l)
	{
		middle = index_f + (index_l - index_f) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			index_f = middle + 1;
		else
			index_l = middle - 1;
		if (index_f <= index_l)
			print_array(array, index_f, index_l);
	}
	return (-1);
}
/**
 * exponential_search - Explonential search algorith
 *
 * @array: pointer to the first element of the array to search
 * @size: Number of elements inside the array
 * @value: Value to be found inside the array
 * Return: Index location of value inside array or -1
 * if its not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t index = 1;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}
	while (index < size && array[index] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		index = index * 2;
	}
	if (index > size - 1)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", index / 2, size - 1);
		return (binary_s(array, index / 2, size - 1, value));
	}
	else
	{
		printf("Value found between indexes [%ld] and [%ld]\n", index / 2, index);
		return (binary_s(array, index / 2, index, value));
	}
	return (-1);
}
