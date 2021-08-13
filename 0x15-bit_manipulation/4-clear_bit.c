#include "holberton.h"

/**
 * clear_bit - clears bits
 * @n: number
 * @index: index
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n &= ~(1 << index);
return (1);
}
