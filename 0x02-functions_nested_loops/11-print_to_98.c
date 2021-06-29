#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - <-
 * @n: variable
 * Return:0
 */
void print_to_98(int n)
{
int x;
if (n > 98)
{
for (x = n; x > 98; x--)
printf("%d, ", x);
printf("98\n");
}
else if (n < 98)
{
for (x = n; x < 98; x++)
printf("%d, ", x);
printf("98\n");
}
else
printf("98\n");
}
