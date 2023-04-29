#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function to free memory of head
 * @head: linked list
 */

void free_listint(listint_t *head)
{
	while (head)
	{
		listint_t *tmp;

		tmp = head;
		head = head->next;
		free(tmp);
	}
}

