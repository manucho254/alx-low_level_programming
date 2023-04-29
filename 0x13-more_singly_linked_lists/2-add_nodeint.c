#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - function that add new node at the ,
 * beginnning of a listint_t list
 * @head: linked list
 * @n: value to add to head->n in linked list
 * Return: the address to the new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	/** check for malloc fail and return NULL  */
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = (*head);
	(*head) = new;

	return (new);
}

