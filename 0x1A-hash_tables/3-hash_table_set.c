#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

hash_node_t *add_node_end(hash_node_t *h, const char *key, const char *value);

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

	if (ht == NULL || strcmp(key, "") == 0 || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	item = malloc(sizeof(hash_node_t));
	/** check for malloc error */
	if (item == NULL)
		return (0);

	item->key = (char *)key;
	item->value = strdup(value);
	item->next = NULL;

	/** iterate through the hash table find the index and add an item */
	for (x = 0; x < ht->size; x++)
	{
		if (x == index && ht->array[x] == NULL)
		{
			ht->array[x] = item;
			break;
		}
		if (x == index && ht->array[x] != NULL)
		{
			item->next = ht->array[x];
			ht->array[x] = item;
			break;
		}
	}

	return (1);
}


/**
 * add_node_end - function to add node to hash_node_t
 *
 * @h: structure of type hash_node_t
 * @key: key for hash node
 * @value: value for a hash node.
 *
 * Return: pointer to new node
 */

hash_node_t *add_node_end(hash_node_t *h, const char *key, const char *value)
{
	hash_node_t *new, *last;

	/** allocate memory for pointer new of type hash_node_t */
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (NULL);
	}
	/** setting the last value */
	last = (h);

	if (key != NULL)
	{
		/** add value to new->key */
		new->key = (char *)key;
		new->value = strdup(value);
		new->next = NULL;
	}
	if (h == NULL)
	{
		h = new;
		return (h);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new;

	return (new);
}
