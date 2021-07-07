#include "holberton.h"
/**
 * puts2 - prints string then newline
 * @str: string
 *  Return: 0
 */
void puts2(char *str)
{
while (*str)
{
_putchar(*str);
str++;
if (*str)
str++;
}
_putchar('\n');
}
