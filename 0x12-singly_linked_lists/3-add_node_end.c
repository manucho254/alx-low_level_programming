#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - function to add node to linked list
 * @head: structure of type list_t
 * @str: string for value of linked list
 * Return: number of nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

	/** allocate memory for pointer new of type list_t */
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	/** setting the last value */
	last = (*head);

	/** add value to new->str */
	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = new;
		return (*head);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new;

	return (last->next);
}
