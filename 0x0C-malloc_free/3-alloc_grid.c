#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - allocates grid
 * @width: width
 * @height: height
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
int g;
int x;
int **array;

if ((width <= 0) || (height <= 0))
return (NULL);
array = malloc(sizeof(int *) * height);
if (array == NULL)
return (NULL);
for (g = 0; g < height; g++)
{
array[g] = malloc(sizeof(int) * width);
if (array[g] == NULL)
{
for (; g >= 0; g++)
{
free(array[g]);
}
free(array);
return (NULL);
}
}
for (g = 0; g < height; g++)
{
for (x = 0; x < width; x++)
{
array[g][x] = 0;
}
}
free(array);
return (array);
}
