#include "holberton.h"

/**
 * more_numbers - prints most numbers followed by newline 10x
 *  Return: 0
 */
void more_numbers(void)
{
int x;
int y = 0;
for (y = 0; y < 10; y++)
{
for (x = 0; x <= 14; x++)
{
if (x > 9)
_putchar ((x / 10) + '0');
_putchar ((x % 10) + '0');
}
_putchar ('\n');
}
}
