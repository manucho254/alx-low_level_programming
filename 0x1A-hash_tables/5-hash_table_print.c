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

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x])
		{
			while (ht->array[x]->next)
			{
				printf("'%s': '%s'", ht->array[x]->key, ht->array[x]->value);
				ht->array[x] = ht->array[x]->next;
			}
			printf("'%s': '%s'", ht->array[x]->key, ht->array[x]->value);
			printf(", ");
		}
	}
	printf("}\n");
}
