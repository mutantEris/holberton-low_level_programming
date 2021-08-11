#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * listint_len - returns length of list
 * @h: list
 * Return: g
 */

size_t listint_len(const listint_t *h)
{
size_t g = 0;

while (h != NULL)
{
g++;
h = h->next;
}
return (g);
}
