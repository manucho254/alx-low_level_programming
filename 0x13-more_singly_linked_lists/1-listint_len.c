#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that return the number of,
 * elements in linked list
 * @h: linked list
 * Return: the number of elements in linked list
 */

size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}

