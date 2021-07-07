#include "holberton.h"
/**
 * _puts - prints string then newline
 * @str: string
 *  Return: 0
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
