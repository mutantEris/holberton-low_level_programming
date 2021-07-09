#include "holberton.h"
/**
 * *string_toupper - reverses array
 * @x: pointer to string
 * Return: x
 */
char *string_toupper(char *x)
{
int g;
for (g = 0; x[g] != '\0'; x++)
{
if (x[g] >= 97 && x[g] <= 122)
x[g] -= 32;
}
return (x);
}
