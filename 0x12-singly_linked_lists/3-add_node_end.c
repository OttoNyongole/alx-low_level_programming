#include "lists.h"
#include "string.h"
/**
 * add_node_end - adds a new node at the end  of a list_t list
 * @head: pointer to a pointer to a struct
 * @str: string to be copied
 *
 * Return: the address of new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *prev_node = *head;
	list_t *new_node;
	unsigned int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		while (prev_node->next != NULL)
			prev_node = prev_node->next;
		prev_node->next = new_node;
	}
	return (new_node);
}
