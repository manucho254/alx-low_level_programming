#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that that deletes node,
 * at index specified
 *
 * @head: pointer to linked list
 * @index: index for node to be deleted
 *
 * Return: pointer to new node or null if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node = NULL, *current_node = NULL, *tmp = NULL;
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
	free(current_node);
	return (1);
}
