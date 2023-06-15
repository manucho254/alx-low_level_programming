#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - function that that deletes node,
 * at index specified
 *
 * @head: pointer to linked list
 * @index: index for node to be deleted
 *
 * Return: 1 if successful else return -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev_node = NULL, *current_node = NULL, *tmp = NULL;
	unsigned int x = 0;

	if ((*head) == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		tmp = (*head);
		(*head) = (*head)->next;
		free(tmp);
		return (1);
	}
	current_node = (*head);
	while (current_node != NULL && x < index)
	{
		prev_node = current_node;
		current_node = current_node->next;
		x++;
	}

	if (current_node == NULL)
	{
		return (-1);
	}

	prev_node->next = current_node->next;
	current_node->next->prev = prev_node;
	free(current_node);
	return (1);
}
