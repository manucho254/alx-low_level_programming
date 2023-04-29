#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - function that add new node at the ,
 * end of a listint_t list
 * @head: linked list
 * @n: value to add to head->n in linked list
 * Return: the address to the new element or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	last = (*head);
	new = malloc(sizeof(listint_t));
	/** check for malloc fail and return NULL  */
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = new;
		return (*head);
	}
	/**
	 * loop while replacing the value,
	 * of last until we find a NULL value
	 */
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;

	return (new);
}
