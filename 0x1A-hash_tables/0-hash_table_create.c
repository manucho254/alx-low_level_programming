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

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t *) * size + 1);
	if (table->array == NULL)
		return (NULL);

	return (table);
}
