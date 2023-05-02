#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - function to free memory of head,
 * and sets head to NULL
 * @head: linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *new;

	new = NULL;
	while ((*head))
	{
		listint_t *tmp;

		tmp = (*head);
		(*head) = (*head)->next;
		free(tmp);
	}
	head = &new;
}

