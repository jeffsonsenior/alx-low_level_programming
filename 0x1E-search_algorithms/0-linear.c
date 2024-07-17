#include "search_algos.h"

/**
 * linear_search - linear search algorithm in array
 *
 * @array: pointer to array to search in
 * @size: number of elements in array
 * @value: value to be searched
 *
 * Return: -1 if value not represented or array is NULL
 *      first index if located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t inc;

	if (array == NULL)
		return (-1);
	for (inc = 0; inc < size; inc++)
	{
		printf("Value checked array[%ld] = [%d]\n", inc, array[inc]);
		if (array[inc] == value)
			return (inc);
	}
	return (-1);
}
