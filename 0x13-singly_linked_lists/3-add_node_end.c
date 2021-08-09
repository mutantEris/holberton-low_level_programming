#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds node to end of list
 * @head: front node
 * @str: string
 * Return: NULL or g
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *g;
unsigned int x;
list_t *z = *head;

g = malloc(sizeof(list_t));
if (g == NULL)
return (NULL);
if (*head == NULL)
{
*head = g;
}
g->next = NULL;
g->str = strdup(str);
for (x = 0; str[x] != '\0'; x++)
{
}
g->len = x;
if (z == NULL)
return (g);
while (z->next != NULL)
{
z = z->next;
}
z->next = g;
return (g);
}
