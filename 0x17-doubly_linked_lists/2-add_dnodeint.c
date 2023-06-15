#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - function to a node in doubly,
 * linked list at the beginning
 *
 * @head: pointer to doubly linked list
 * @n: value for node
 *
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

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

	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	new->next = (*head);
	(*head)->prev = new;
	(*head) = new;

	return (*head);
}
