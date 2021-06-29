#include "holberton.h"
/**
 * times_table - prints times table
 * Return:0
 */
void times_table(void)
{
int g;
int x;

for (g = 0; g < 10; g++)
{
for (x = 0; x < 10; x++)
{
if ((g == 0) && (x > 0))
_putchar(' ');
if ((((g * x) / 10) == 0) && (((g * x) % 10) != 0))
_putchar(' ');
else if (((g * x) / 10) == 0)
{
}
else
_putchar(((g * x) / 10) + '0');
_putchar(((g * x) % 10) + '0');
if (x != 9)
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
