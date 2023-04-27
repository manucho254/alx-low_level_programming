#include "lists.h"
#include <stdlib.h>

/**
 * print_list - function to free linked list
 * @head: pointer to linked list
 */

void free_list(list_t *head)
{
	if(head->next)
	{
		free_list(head->next);
	}
	free(head->str);
	free(head);
}
