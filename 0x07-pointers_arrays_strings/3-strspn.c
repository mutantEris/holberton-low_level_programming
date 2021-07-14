#include "holberton.h"
/**
 * _strspn - finds length of prefix substring
 * @accept: characters
 * @s: string
 * Return: g
 */
unsigned int _strspn(char *s, char *accept)
{
int g;
int x;
for (g = 0; s[g] != '\0'; g++)
{
for (x = 0; accept[x] != '\0'; x++)
{
if (s[g] == accept[x])
break;
}
if (accept[x] == '\0')
break;
}
return (g);
}
