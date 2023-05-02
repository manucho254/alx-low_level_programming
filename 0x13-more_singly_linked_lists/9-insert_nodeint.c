#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a,
 * new node at a given position
 *
 * @head: pointer to linked list
 * @idx: index to node
 * @n: value to add to node
 *
 * Return: pointer to new node or null if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL, *prev_node = NULL, *current_node = NULL;
	unsigned int x = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if ((*head) == NULL && idx == 0)
	{
		(*head) = new;
		return (*head);  /** added new node to head */
	}
	if ((*head) == NULL || idx == 0)
	{
		free(new);
		return (NULL); /** invalid index */
	}
	current_node = (*head);
	while (current_node != NULL && x < idx)
	{
		prev_node = current_node;
		current_node = current_node->next;
		x++;
	}
	if (x < idx)
	{
		free(new);
		return (NULL);
	}

	prev_node->next = new;
	new->next = current_node;

	return (new);
}
