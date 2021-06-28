#include "holberton.h"
/**
 * _islower - checks lowercase
 * @c: variable to check
 * Return:0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
