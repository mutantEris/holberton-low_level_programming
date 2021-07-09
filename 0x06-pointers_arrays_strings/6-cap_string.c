#include "holberton.h"
/**
 * *cap_string - capitalizes each word
 * @x: given string
 * Return: x
 */
char *cap_string(char *x)
{
int g;
int c;
char array[] = { 9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

for (g = 0; x[g] != '\0'; g++)
{
if (g == 0 && x[g] >= 97 && x[g] <= 122)
x[g] -= 32;
for (c = 0; c < 13; c++)
{
if (x[g] == array[c])
{
if (x[g + 1] >= 97 && x[g + 1] <= 122)
x[g + 1] -= 32;
}
}
}
return (x);
}
