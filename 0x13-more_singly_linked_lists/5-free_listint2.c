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
	if ((*head) == NULL)
	{
		head = NULL;
		return;
	}
	while ((*head))
	{
		listint_t *tmp;

		tmp = (*head);
		(*head) = (*head)->next;
		free(tmp);
	}
	head = NULL;
}

