#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints all the elements of the linked list
 * @h: The list
 * Return: Number of nodes in the linked list_t
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;	
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else 
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
