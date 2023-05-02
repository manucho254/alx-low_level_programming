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
	listint_t *current_node, *temp_var_1, *temp_var_2, *tmp = NULL;
	unsigned int x = 0;

	current_node = NULL;
	if ((*head) == NULL)
	{
		return (-1);
	}
	while ((*head))
	{
		current_node = (*head);
		if (x == index)
		{
			temp_var_1 = (*head)->next;
			(*head) = tmp;
			free(current_node);
			break;
		}
		else
		{
			add_nodeint_end(&tmp, (*head)->n);
		}
		(*head) = (*head)->next;
		free(current_node);
		x++;
	}
	if (x > index)
	{
		return (-1);
	}
	/** add values in new to head */
	while (temp_var_1)
	{
		temp_var_2 = temp_var_1;
		add_nodeint_end(head, temp_var_1->n);
		temp_var_1 = temp_var_1->next;
		free(temp_var_2);
	}

	return (1);
}
