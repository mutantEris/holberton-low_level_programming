#include "holberton.h"
/**
 * print_rev - prints string in reverse then newline
 * @s: string
 *  Return: 0
 */
void print_rev(char *s)
{
int length = 0;
while (*s)
{
s++;
length++;
}
while (length > 0)
{
s--;
length--;
_putchar(*s);
}
_putchar('\n');
}
