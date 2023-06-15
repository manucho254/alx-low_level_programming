#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - function that returns the,
 * number of elements in a linked dlistint_t list.
 *
 * @h: pointer to doubly linked list
 *
 * Return: the number on nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (count);
	}

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
