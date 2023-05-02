#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer to linked list
 * Return: pointer to the reversed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp;

	tmp = NULL;
	while (*head)
	{
		add_nodeint_end(&tmp, (*head)->n);
		(*head) = (*head)->next;
	}

	tmp = (*head);
	return (tmp);
}

