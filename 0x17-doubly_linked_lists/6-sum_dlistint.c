#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - function that returns the sum of all the,
 * data (n) of a dlistint_t linked list.
 *
 * @head: pointer to doubly linked list
 *
 * Return: sum of all elements in linked list
 */

int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	if (head == NULL)
	{
		return (sum);
	}

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
