#include "lists.h"
#include <stdio.h>

/**
 * insert_dnodeint_at_index - function that inserts a,
 * new node at a given position.
 *
 * @h: pointer to doubly linked list
 * @idx: index to look for node
 * @n: value for new node
 *
 * Return: pointer to new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tail = NULL, *head = NULL;
	size_t count = 0;
	int found = 0;

	if (h == NULL)
	{
		return (NULL);
	}

	while (*h)
	{
		if (count == idx)
		{
			tail = (*h);
			found = 1;
			break;
		}
		/** add nodes to head */
		add_dnodeint_end(&head, (*h)->n);
		(*h) = (*h)->next;
		count++;
	}

	/** check if the index was found */
	if (!found)
		return (NULL);

	/** update value of (*h) */
	(*h) = head;
	add_dnodeint_end(&head, n); /** add the new node to list */
	/** insert the values at the end to new linked list */
	while (tail)
	{
		add_dnodeint_end(&head, tail->n);
		tail = tail->next;
	}
	return (*h);
}
