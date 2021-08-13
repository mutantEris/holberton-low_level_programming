#include "holberton.h"
/**
 * binary_to_uint - turns binary numbers into unsigned ints
 * @b: binary
 * Return: 0 or ben
 *
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int ben = 0;
int g = 0;

if (b == NULL)
return (0);
for (g = 0; b[g] != '\0'; ++g)
if (b[g] != '0' && b[g] != '1')
return (0);
for (g = 0; b[g] != '\0'; ++g)
{
ben *= 2;
if (b[g] == '1')
ben += 1;
}
return (ben);
}
