#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - function that inserts a,
 * new node at a given position.
 *
 * @h: pointer to doubly linked list
 * @idx: index to look for node
 * @n: value for new node
 *
 * Return: pointer to new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tail = NULL, *head = NULL;
	size_t count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	if ((*h) == NULL && idx == 0)
	{
		(*h) = new;
		return (*h);
	}
	if ((*h) == NULL || idx == 0)
	{
		free(new);
		return (NULL);
	}
	while (*h)
	{
		if (count == idx)
		{
			tail = (*h);
			break;
		}
		add_dnodeint_end(&head, (*h)->n);
		(*h) = (*h)->next;
		count++;
	}
	if (tail == NULL) /** check if the index was found */
		return (NULL);
	(*h) = head; /** update value of (*h) */
	add_dnodeint_end(&head, n); /** add the new node to list */
	while (tail) /** insert the values at the end to new linked list */
	{
		add_dnodeint_end(&head, tail->n);
		tail = tail->next;
	}
	return (*h);
}
