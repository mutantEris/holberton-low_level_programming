#include "holberton.h"
/**
 * get_bit - gets
 * @n: number
 * @index: index
 * Return: -1 or 1
 */
int get_bit(unsigned long int n, unsigned int index);
{
if (index > 63)
return (-1);
val = val >> index;
return (1 & val);
}
