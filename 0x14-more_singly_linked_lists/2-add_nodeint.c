#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *g;

g = malloc(sizeof(listint_t));
if (g == NULL)
return (NULL);
g->n = n;
g->next = *head;
(*head) = g;
return (g);
}
