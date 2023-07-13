#include "hash_tables.h"
#include <stdlib.h>


/**
 * free_hash_nodes - free a list of hash nodes
 *
 * @node: pointer to hash node
 *
 */

void free_hash_nodes(hash_node_t *node)
{
	while (node != NULL)
	{
		hash_node_t *tmp = node;

		node = node->next;
		free(tmp->key); /** free key */
		free(tmp->value); /** free value */
		free(tmp); /** free hash node */
	}
}

/**
 * hash_table_delete - delete hash table
 *
 * @ht: pointer to hash table.
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;

	/** if ht is NULL just return */
	if (ht == NULL)
		return;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			free_hash_nodes(ht->array[x]);
		}
		else
			free(ht->array[x]);
	}

	free(ht->array);
	free(ht);
}
