#include "holberton.h"

/**
 * print_numbers - prints numbers followed by newline
 *  Return: 0
 */
void print_numbers(void)
{
char x;
for (x = '0'; x <= '9'; x++)
{
_putchar (x);
}
_putchar('\n');
}
