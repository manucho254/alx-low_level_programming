#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - function to add node to linked list
 * @head: structure of type list_t
 * @str: string for value of linked list
 * Return: number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	/** allocate memory for pointer new of type list_t */
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	/** add value to new->str */
	new->str = strdup(str);
	new->len = strlen(new->str);
	if ((*head) == NULL)
	{
		/** make new->next point to the pointer of *head */
		new->next = NULL;
	}
	else
	{
		/** make new->next point to the pointer of *head */
		new->next = (*head);
	}
	new->next = (*head);
	(*head) = new;

	return (*head != NULL ? *head : NULL);
}
