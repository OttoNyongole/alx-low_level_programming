#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of linked list
 * @index: index
 *
 * Return: New node address
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *i = head;
	unsigned int j = 0;

	if (head != NULL)
	{
		return (NULL);
	}

	while (i != NULL)
	{
		i = i->next;
		j++;
	}

	if (index > (j - 1))
	{
		return (NULL);
	}

	for (j = 0; j < index; j++)
	{
		head = head->next;
	}
	return (head);
}
