#include "holberton.h"
/**
 * memset - fills memory with a byte
 * @g: number
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
return(s);
}
