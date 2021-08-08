#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums up the list
 * @n: number of items in list
 * Return: 0 or x
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int g;
va_list ap;
int x;

va_start(ap, n);
if (n == 0)
return (0);
for (g = 0; g < n; g++)
{
x += va_arg(ap, int);
}
return (x);
va_end(ap);
}
