#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for int
 * @array: the array
 * @size: size of array
 * @cmp: comparative
 * Return: -1 or g
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int g;

if (array == NULL || cmp == NULL)
return (-1);
if (size <= 0)
return (-1);
for (g = 0; g < size; g++)
{
if ((*cmp)(array[g]) == 1)
return (g);
}
return (-1);
}
