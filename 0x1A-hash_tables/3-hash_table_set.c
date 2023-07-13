#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_hash_node - free hash node list
 *
 * @node: pointer to hash node
 *
 */

void free_hash_node(hash_node_t *node)
{
	while (node)
	{
		hash_node_t *tmp = node;

		node = node->next;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}
	free(node);
}

/**
 * hash_table_set - add new element to hash table
 *
 * @ht: pointer to hash table
 * @key: key for hash node
 * @value: value for a hash node.
 *
 * Return: 1 if success else return 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, x;
	hash_node_t *item;

	if (ht == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	item = malloc(sizeof(hash_node_t));
	/** check for malloc error */
	if (item == NULL)
		return (0);
	item->key = strdup(key);
	item->value = strdup(value);
	item->next = NULL;
	/** iterate through the hash table find the index and add an item */
	for (x = 0; x < ht->size; x++)
	{
		/** for cases where we have no collisions */
		if (x == index && ht->array[x] == NULL)
		{
			ht->array[x] = item;
			break;
		}
		/** for cases where we have collisions */
		if (x == index && ht->array[x])
		{
			/** for cases where we have the same key */
			if (strcmp(key, ht->array[x]->key) == 0)
			{
				ht->array[x]->value = strdup(value);
				free_hash_node(item);
				break;
			}
			item->next = ht->array[x];
			ht->array[x] = item;
			break;
		}
	}
	if (x == ht->size)
		free_hash_node(item);
	return (1);
}
