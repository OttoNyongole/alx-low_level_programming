#include "lists.h"
#include <stdio.h>

/**
 * list_len - prints the number of elements in linked list_s
 * @h: the nodes of the linked list_s
 * Return: number of elements of the linked list_s
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;
	while (h)
	{
		elements++;
		h = h->next
	}
	return (elements);
}
