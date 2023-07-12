#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */

int main(void)
{
	hash_table_t *ht;
	unsigned long int x;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", "fun");
	hash_table_set(ht, "mentioner", "yes");
	hash_table_set(ht, "test", NULL);
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x])
		{
			hash_node_t *head = ht->array[x];

			while (head)
			{
				printf("%s | %s\n", head->key, head->value);
				head = head->next;
			}
		}
	}
	
	return (EXIT_SUCCESS);
}
