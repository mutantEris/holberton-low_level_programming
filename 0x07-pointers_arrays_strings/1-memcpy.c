#include "holberton.h"
/**
 * _memcpy - copies memory
 * @n: number of copied bytes
 * @src: source
 * @dest: destination
 * Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int g;
for (g = 0; g < n; g++)
dest[g] = src[g];
return (dest);
}
