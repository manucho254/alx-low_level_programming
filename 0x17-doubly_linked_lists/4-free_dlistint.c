#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - function that frees memery,
 * of a doubly linked list.
 *
 * @head: pointer to linked list
 */

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		dlistint_t *tmp = head;

		head = head->next;
		free(tmp);
	}
}
