#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to new memory space copy
 * @str: string
 * Return: NULL or anything
 */
char *_strdup(char *str)
{
int g;
char *anything;
int x;

if (str == NULL)
return (NULL);
for (g = 0; str[g] != '\0'; g++)
{
}
anything = malloc((g + 1) * sizeof(char));
if (anything == NULL)
return (NULL);
for (x = 0; x <= g; x++)
{
anything[x] = str[x];
}
return (anything);
}
