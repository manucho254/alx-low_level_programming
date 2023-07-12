#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_get - get the value of an key to hash table
 *
 * @ht: pointer to hash table
 * @key: key for hash node
 *
 * Return: value if success else return NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *next;
	unsigned long int index, x;
	char *value;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	/** iterate through the hash table find the index and add an item */
	for (x = 0; x < ht->size; x++)
	{
		if (x == index && ht->array[x])
		{
			next = ht->array[x]->next;
			/** for items that are linked */
			while (next)
			{
				if (strcmp(next->key, key) == 0)
				{
					return (next->value);
				}
				next = next->next;
			}
			value = strdup(ht->array[x]->value);
			break;
		}
	}

	/** if key is not found */
	if (x == (ht->size))
		return (NULL);

	return (value);
}
