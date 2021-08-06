#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - returns the number of elements in list
 * @h: h
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
int g = 0;

list_t *tmp = (list_t *)h;
while (tmp != NULL)
{
tmp = tmp->next;
g++;
}
return (g);
}
