#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function to free linked list
 * @head: pointer to linked list
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *tmp = head;

		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
