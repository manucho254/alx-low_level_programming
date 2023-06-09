#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function that prints all the,
 * elements of a doubly linked list
 *
 * @h: pointer to doubly linked list
 *
 * Return: the number on nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (count);
	}

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
