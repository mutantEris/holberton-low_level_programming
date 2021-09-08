#include "lists.h"
/**
 * print_dlistint - prints all elements of list
 * @h: h
 * Return: g
 */

size_t print_dlistint(const dlistint_t *h)
{
int g = 0;

const dlistint_t *tmp = h;
for (; tmp != NULL; tmp = tmp->next, g++)
printf("%d\n", tmp->n);
return (g);
}
