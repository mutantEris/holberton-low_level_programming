#include "holberton.h"
/**
 * reverse_array - reverses array
 * @n: number of elements in the array
 * @a: beginning of the array
 */
void reverse_array(int *a, int n)
{
int x;
for (x = 0; x < n / 2; x++)
{
int temp = a[x];
a[x] = a[n - 1 - x];
a[n - 1 - x] = temp;
}
}
