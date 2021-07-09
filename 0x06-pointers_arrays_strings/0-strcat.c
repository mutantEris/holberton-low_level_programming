#include "holberton.h"
/**
 * *_strcat - puts the first string on the end of the second
 * @dest: destination string
 * @src: source string
 *  Return: 0
 */
char *_strcat(char *dest, char *src)
{
int x;
int y;

for (x = 0; dest[x] != '\0'; x++)
{
}
for (y = 0; src[y] != '\0'; y++)
{
dest[x + y] = src[y];
}
dest[x + y] = '\0';
return (dest);
}
