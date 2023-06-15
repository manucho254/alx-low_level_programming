#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - function to a node in doubly,
 * linked list at the end
 *
 * @head: pointer to doubly linked list
 * @n: value for node
 *
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tail;

	new = malloc(sizeof(dlistint_t));
	/** check for malloc fail */
	if (new == NULL)
		return (NULL);
	/** check if the list is empty */
	if (*head == NULL)
	{
		new->prev = NULL;
		new->n = n;
		new->next = NULL;
		(*head) = new;

		return (*head);
	}
	/** add values to new */
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	tail = (*head);
	/** move to the last node */
	while (tail->next != NULL)
		tail = tail->next;

	tail->next = new;
	new->prev = tail;

	return (tail);
}
