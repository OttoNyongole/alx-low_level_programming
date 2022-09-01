#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: head of linked list
 * @n: value of new node
 *
 * Return: new node address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nd;

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
	nd->prev = NULL;
	nd->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = nd;
	}
	*head = nd;

	return (nd);
}
