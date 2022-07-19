#include "lists.h"
#include <stdio.h>

/**
 * listint_len - A function that return the number of elements
 * in a linked list
 * @h: The list
 * Return: the number of elements in h
 */
size_t listint_len(const listint_t *h)
{
	size_t s = 0;
	while (h)
	{
		h = h->next;
		S++;
	}
	return (s);
}
