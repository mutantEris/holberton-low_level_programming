#include "holberton.h"

/**
 * swap_int - prints line
 * @a: variable
 * @b: variable
 *  Return: 0
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
