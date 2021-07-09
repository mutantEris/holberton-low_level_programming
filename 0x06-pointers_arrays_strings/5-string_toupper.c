#include "holberton.h"
/**
 * *string_toupper - reverses array
 * @x: pointer to string
 * Return: x
 */
char *string_toupper(char *x)
{
int g;
for (g = 0; x[g] != '\0'; g++)
{
if (x[g] >= 'a' && x[g] <= 'z')
{
x[g] -= 32;
}
}
return (x);
}
