#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_list - prints the elements of the list
 * @h: h
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
int g = 0;

list_t *tmp = (list_t *)h;
while (tmp != NULL)
{
if (tmp->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", tmp->len, tmp->str);
tmp = tmp->next;
g++;
}
return (g);
}
