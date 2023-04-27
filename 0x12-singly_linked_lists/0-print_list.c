#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - function to print all values,
 * in a linked list
 * @h: structure of type list_t
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", (int)strlen(h->str), h->str);
		}
		h = h->next;
		count += 1;
	}

	return (count);
}
