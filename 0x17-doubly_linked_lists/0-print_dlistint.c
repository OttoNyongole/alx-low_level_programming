#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints elements of a dlistint_t list
 * @h: head of list
 *
 * Return: elements of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
