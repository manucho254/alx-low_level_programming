#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * list_len - function to get the number of elements,
 * in a linked list.
 * @h: structure of type list_t
 * Return: number of elements in linked list
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count += 1;
	}

	return (count);
}
