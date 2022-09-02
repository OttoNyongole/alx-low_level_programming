#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - frees dlistint_t list.
 * @head: head of linked list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
