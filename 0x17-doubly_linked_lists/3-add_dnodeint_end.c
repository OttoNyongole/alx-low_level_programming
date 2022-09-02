#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - add new node at the end of a list.
 * @head: head of linked list
 * @n: new node value
 *
 * Return: new node address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nd, *aux = *head;

	if (head == NULL)
	{
		return (NULL);
	}

	nd = malloc(sizeof(dlistint_t));

	if (nd == NULL)
	{
		return (NULL);
	}

	nd->n = n;
	if (!(*head))
	{
		nd->prev = NULL, nd->next = *head;
		*head = nd;
		return (nd);
	}

	while (aux->next)
	{
		aux = aux->next;
	}

	nd->prev = aux;

	nd->next = NULL;

	aux->next = nd;

	return (nd);
}
