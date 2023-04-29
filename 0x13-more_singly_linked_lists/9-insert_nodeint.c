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
	listint_t *new, *temp_var_1, *temp_var_2, *tmp = NULL;
	unsigned int x = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	while ((*head))
	{
		temp_var_1 = (*head);
		if (x == idx)
		{
			new->n = n;
			new->next = (*head);
			(*head) = tmp;
			break;
		}
		else
		{
			add_nodeint_end(&tmp, (*head)->n);
		}
		(*head) = (*head)->next;
		free(temp_var_1);
		x++;
	}
	if (x > idx)
	{
		return (NULL);
	}
	/** add values in new to head */
	while (new)
	{
		temp_var_2 = new;
		add_nodeint_end(head, new->n);
		new = new->next;
		free(temp_var_2);
	}
	return (*head);
}
