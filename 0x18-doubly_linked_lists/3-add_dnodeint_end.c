#include "lists.h"

/**
 * add_dnodeint_end - ends
 * @head: the head honcho node
 * @n: passed in node
 *Return: nnode
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *nnode;

	current = *head;
	nnode =	malloc(sizeof(dlistint_t));
	if (nnode == NULL)
	{
		free(nnode);
		return (NULL);
	}
	nnode->n = n;
	nnode->next = NULL;
	while (current->next != NULL)
	{
		current = current->next;
	}
	nnode->prev = current;
	current->next = nnode;
	nnode->prev = current;
	return (nnode);
}
