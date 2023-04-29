#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head,
 * node of a listint_t linked list,
 * and returns the head node’s data (n).
 *
 * @head: pointer to linked list
 * Return: head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int n, val;

	/** check if the linked list is NULL and return 0 */
	if ((*head) == NULL)
	{
		return (0);
	}

	n = 0;
	while (n < 1)
	{
		listint_t *tmp; /** pointer to hold value of (*head)*/

		tmp = (*head);
		val = ((*head)->n);
		(*head) = (*head)->next;
		free(tmp); /** free memory at for node at head of list */
		n++;
	}

	return (val);
}

