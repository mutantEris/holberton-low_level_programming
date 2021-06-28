#include "holberton.h"
/**
 * print_alphabet_x10 - prints alphabet x10
 * Return:0
 */
void print_alphabet_x10(void)
{
char X;
char Y;
for (Y = 0; Y <= 9; Y++)
{
for (X = 'a'; X <= 'z'; X++)
{
_putchar(X);
}
_putchar('\n');
}
}
