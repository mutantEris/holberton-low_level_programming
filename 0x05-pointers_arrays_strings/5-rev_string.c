#include "holberton.h"
/**
 * rev_string - prints string in reverse then newline
 * @s: string
 *  Return: 0
 */
void rev_string(char *s)
{
int length = 0;
int x;
while (*s)
{
s++;
length++;
}
s -= length;
for (x = 0; x < length / 2; x++)
{
char temp = s[x];
s[x] = s[length - 1 - x];
 s[length - 1 - x] = temp;
}
}
