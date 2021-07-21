#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - golly i wonder what this does
 * @size: size of array
 * @c: characters
 * Return: NULL or pointer to array
 */

char *create_array(unsigned int size, char c)
{
char *g;
unsigned int x;

if (size == 0)
return (NULL);
g = malloc(size);
if (g == NULL)
return (NULL);
for (x = 0; x < size; x++)
{
g[x] = c;
}
return (g);
}
