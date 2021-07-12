#include "holberton.h"
/**
 * _print_rev_recursion - prints a string then newline
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
