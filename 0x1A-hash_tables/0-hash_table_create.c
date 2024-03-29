#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - function to create a hash table
 * @size: size of the array
 *
 * Return: pointer to new hash table else return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int x;

	/** allocate memory for hash table */
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);

	for (x = 0; x < table->size; x++)
		table->array[x] = NULL;

	return (table);
}
