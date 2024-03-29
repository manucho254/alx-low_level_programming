#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - print key and a value in hash table.
 *
 * @ht: pointer to hash table.
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	int add_comma = 1;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			hash_node_t *head = ht->array[x];

			while (head)
			{
				if (!add_comma)
					printf(", ");
				printf("'%s': '%s'", head->key, head->value);
				head = head->next;
				if (add_comma == 1)
					add_comma = 0;
			}
		}
	}
	printf("}\n");
}
