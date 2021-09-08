#include "lists.h"
/**
 * print_dlistint - prints all elements of list
 * @h: h
 * Return: g
 */

size_t print_dlistint(const dlistint_t *h)
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
