#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_listint - prints elements of list
 * @h: int
 * Return: g
 */

size_t print_listint(const listint_t *h)
{
size_t g = 0;

while (h != NULL)
{
printf("%d\n", h->n);
g++;
h = h->next;
}
return (g);
}
