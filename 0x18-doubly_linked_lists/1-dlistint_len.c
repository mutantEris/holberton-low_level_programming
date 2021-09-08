#include "lists.h"
/**
 * dlistint_len - returns the number of elements in list
 * @h: h
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
int g = 0;

const dlistint_t *tmp = h;
while (tmp != NULL)
{
tmp = tmp->next;
g++;
}
return (g);
}
