#include "lists.h"
/**
 * listint_len - returns the number of elements in a linkedlisti\nt_t list
* @h: a variable that points to a listint_t struct
* Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: pointer to pointer to listint_t struct
 * @index: index of node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t length;
	unsigned int i;
	listint_t *prev_node = *head;
	listint_t *tmp;

	length = listint_len(*head);
	if (index >= length)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
		prev_node = prev_node->next;
	tmp = prev_node;
	prev_node = prev_node->next;
	tmp->next = prev_node->next;
	free(prev_node);
	return (1);
}
