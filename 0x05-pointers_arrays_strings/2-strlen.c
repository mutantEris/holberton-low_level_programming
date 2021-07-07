#include "holberton.h"

/**
 * _strlen - checks length of string
 * @s: variable
 *  Return: 0
 */
int _strlen(char *s)
{
int length = 0;
while (*s++)
{
length++;
}
return (length);
}
