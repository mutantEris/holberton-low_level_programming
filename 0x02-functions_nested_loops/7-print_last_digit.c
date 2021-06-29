#include "holberton.h"
/**
 * print_last_digit - prints last digit
 * @g: taken variable
 * Return:0
 */
int print_last_digit(int g)
{
int x;
x = g % 10;
if (x >= 0)
{
_putchar (x + '0');
return (x);
}
else
{
_putchar (-x + '0');
return (-x);
}
}
