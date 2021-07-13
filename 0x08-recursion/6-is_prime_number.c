#include "holberton.h"
/**
 * is_prime_number - prints primes
 * @n: number
 * Return: 0 or -1 or prime number
 */
int is_prime_number(int n)
{
if (n > 1 && n < 4)
return (1);
if (n <= 0)
return (0);
if (n == 1)
return (0);
if (n % 2 == 0)
return (0);
else
return (help(3, n));
}
/**
 * help - helps
 * @g: number
 * @n: cooler number
 * Return: a prime maybe
 */
int help(int g, int n)
{
if (g >= n)
return (1);
if (n % g == 0)
return (0);
else
return (help(g + 2, n));
}
