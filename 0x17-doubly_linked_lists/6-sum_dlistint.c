#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
 * @head: head of linked list
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int result = 0;
	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
