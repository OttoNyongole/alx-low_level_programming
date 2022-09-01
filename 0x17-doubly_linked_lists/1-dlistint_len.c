#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - returns number of elements in a linked.
 * @h: head of list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
