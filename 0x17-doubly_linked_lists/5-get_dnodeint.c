#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - function that returns the,
 * nth node of a dlistint_t linked list.
 *
 * @head: pointer to doubly linked list
 * @index: index to look for node
 *
 * Return: pointer to node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}

	return (NULL);
}
