#include "lists.h"

/**
 * sum_listint - function that returns the sum of all,
 * the data (n) of a listint_t linked list
 *
 * @head: pointer to linked list
 * Return: sum of all the data (n) of a,
 * listint_t linked list, else return 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	/** check if the linked list is empty */
	if (head == NULL)
	{
		return (0);
	}

	while (head)
	{
		sum += head->n;
		head = head->next; /** move to the next node */
	}

	return (sum);
}
