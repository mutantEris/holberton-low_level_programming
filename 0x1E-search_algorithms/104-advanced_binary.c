#include "search_algos.h"

/**
 * binarySearch - advanced binary search, recursively
 * @array: array
 * @start: search start point
 * @end: end point
 * @value: sought value
 * Return: index of first instance or -1
 */

int binarySearch(int *array, int start, int end, int value)
{
	if (end >= start)
	{
		int x;
		int middle;

		printf("Searching in array: %d", array[start]);
		for (x = start + 1; x <= end; x++)
			printf(", %d", array[x]);
		printf("\n");
		middle = start + (end - start) / 2;
		if (array[middle] == value)
		{
			if (array[middle - 1] == value && middle != 0)
				return (binarySearch(array, start, middle, value));
			return (middle);
		}
		if (array[middle] > value)
			return (binarySearch(array, start, middle, value));
		return (binarySearch(array, middle + 1, end, value));
	}
	return (-1);
}

/**
 * advanced_binary - entrance function for an advanced binary search algo
 * @array: arra
 * @size: array size
 * @value: value
 * Return: where value is found or -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binarySearch(array, 0, size - 1, value));
}
