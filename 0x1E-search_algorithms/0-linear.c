#include "search_algos.h"

/**
 * linear_search - performs a linear search
 * @array: the array to search
 * @size: array size
 * @value: sought value
 * Return: where value is found
 */

int linear_search(int *array, size_t size, int value)
{
	int x;

	if (!array || size == 0)
		return (-1);
	for (x = 0; x < (int)size; x++)
	{
		printf("Value checked array[%i] = [%i]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
