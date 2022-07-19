#include "lists.h"
/**
 * free_listint_safe - frees lists with a loop
 * @h: pointer to a pointer to a listint_t list
 *
 * Return: size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t counter = 0;

	while (*h && ((*h)->next < *h))
	{
		tmp = (*h)->next;
		counter++;
		free(*h);
		*h = tmp;
	}
	if (*h)
	{
		free(*h);
		counter++;
	}
	*h = NULL;
	return (counter);
}
