#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that returns the,
 * nth node of a listint_t linked list
 *
 * @head: pointer to linked list
 * @index: index is the index of the node, starting at 0
 * Return: pointer to node found at index else return NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	n = 0;
	while (head)
	{
		/** if n == index we found the node */
		if (n == index)
		{
			return (head);
		}
		head = head->next; /** move to the next node */
		n++;
	}

	return (NULL);
}
