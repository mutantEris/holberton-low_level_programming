#include "holberton.h"
#include <string.h>
/**
 * _strstr - locates substring
 * @haystack: a stack of hay
 * @needle: pointy thing
 * Return: 0 or NULL or substring
 */
char *_strstr(char *haystack, char *needle)
{
size_t n = strlen(needle);
while (*haystack)
if (!memcmp(haystack++, needle, n))
return ((char *)(haystack - 1));
return (0);
}
