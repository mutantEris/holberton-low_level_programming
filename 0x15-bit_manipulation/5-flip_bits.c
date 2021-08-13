#include "holberton.h"

/**
 * flip_bits - flips them bits
 * @n: int 1
 * @m: int 2
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int g;
int count = 0;

g = n ^ m; 
while (g)
{
count += (g & 1);
g >>= 1;
}
return (count);
}
