#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function to free linked list
 * @head: pointer to linked list
 */

void free_list(list_t *head)
{
	/**
	 * check that next is not null and,
	 * recursively call the function again
	 */
	if (head->next)
	{
		free_list(head->next);
	}
	free(head->str);
	free(head);
}
