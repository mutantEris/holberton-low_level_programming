#include "holberton.h"
/**
 * _strcmp - compares two string
 * @s1: first string
 * @s2: second string
 *  Return: difference
 */
int _strcmp(char *s1, char *s2)
{
int x;
for (x = 0; s1[x] != '\0' && s2[x] != '\0'; x++)
{
if (s1[x] != s2[x])
break;
}
return (s1[x] - s2[x]);
}
