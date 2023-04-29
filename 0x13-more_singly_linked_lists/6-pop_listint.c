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

	if ((*head) == NULL)
	{
		return (0);
	}

	n = 0;
	while (n < 1)
	{
		listint_t *tmp;

		tmp = (*head);
		val = ((*head)->n);
		(*head) = (*head)->next;
		free(tmp);
		n++;
	}

	return (val);
}

