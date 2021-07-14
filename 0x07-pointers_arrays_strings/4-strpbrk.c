#include "holberton.h"
#include <string.h>
/**
 * _strpbrk - finds length of prefix substring
 * @accept: characters
 * @s: string
 * Return: g
 */
char *_strpbrk(char *s, char *accept)
{
int g;

if (*s == '\0' || *accept == '\0')
return ('\0');
for (g = 0; s[g] != '\0'; g++)
{
if (strchr(accept, s[g]))
return (s + g);
}
return ('\0');
}
