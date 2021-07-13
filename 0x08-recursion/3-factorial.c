#include "holberton.h"
/**
 * factorial - prints factorials
 * @n: number
 * Return: 0 or -1 or factorial
 */
int factorial(int n)
{
if (n == 0)
return (1);
if (n < 0)
return (-1);
else
return (n * factorial(n - 1));
}
