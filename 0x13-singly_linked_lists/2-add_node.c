#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds node to beginning of list
 * @head: front node
 * @str: string
 * Return: NULL or g
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *g;
unsigned int x;

g = malloc(sizeof(list_t));
if (g == NULL)
return (NULL);
if (*head == NULL)
g->next = NULL;
else
g->next = *head;
g->str = strdup(str);
for (x = 0; str[x] != '\0'; x++)
{
}
g->len = x;
*head = g;
return (*head);
}
