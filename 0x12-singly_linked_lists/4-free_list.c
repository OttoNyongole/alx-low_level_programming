#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: a variable pointing to a struct of type list_t
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		if (head->str)
		free(head->str);
		free(head);
		head = head->next;
	}
}
