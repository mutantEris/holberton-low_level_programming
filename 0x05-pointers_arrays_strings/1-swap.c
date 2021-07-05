#include "holberton.h"

/**
 * print_line - prints line
 * @*a: variable
 * @*b: variable
 *  Return: 0
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
