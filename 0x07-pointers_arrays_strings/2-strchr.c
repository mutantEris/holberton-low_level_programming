#include "holberton.h"
/**
 * _strchr - locates character
 * @c: character
 * @s: string
 * Return: destination
 */
char *_strchr(char *s, char c)
{
int g;
for (g = 0; s[g] != '\0'; g++)
{
if (s[g] == c)
return (s + g);
}
return ('\0');
}
