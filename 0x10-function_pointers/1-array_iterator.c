#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - iterates through an array
 * @array: array
 * @size: size
 * @action: comes after camera
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int g;
if (array == NULL || action == NULL)
return;
for (g = 0; g < size; g++)
{
(*action)(array[g]);
}
}
