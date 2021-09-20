#include "lists.h"
/**
 * add_dnodeint - adds nodes
 * @head: front node
 * @n: number
 * Return: NULL or g
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *nnode;

nnode = malloc(sizeof(dlistint_t));
if (nnode == NULL)
return (NULL);
if (*head == NULL)
nnode->next = NULL;
else
nnode->next = *head;
nnode->n = n;
*head = nnode;
free(nnode);
return (*head);
}
