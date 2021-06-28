#include "holberton.h"
/**
 * _islower - checks lowercase
 * @c: variable to check
 * Return:0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (0);
else
return (1);
}
