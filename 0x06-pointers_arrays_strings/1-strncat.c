#include "holberton.h"
/**
 * *_strncat - puts the first string on the end of the second
 * @dest: destination string
 * @src: source string
 * @n: number of characters allowed
 *  Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
int x;
int y;

for (x = 0; dest[x] != '\0'; x++)
{
}
for (y = 0; src[y] != '\0' && y < n; y++)
{
dest[x + y] = src[y];
}
dest[x + y] = '\0';
return (dest);
}
