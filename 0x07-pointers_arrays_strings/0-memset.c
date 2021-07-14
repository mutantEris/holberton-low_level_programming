#include "holberton.h"
/**
 * _memset - fills memory with a byte
 * @s: string
 * @b: character to fill
 * @n: number of bytes to fill
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int g;

for (g = 0; g < n; g++)
s[g] = b;
return (s);
}
