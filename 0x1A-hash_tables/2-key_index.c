#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index - find the index of a key
 *
 * @key: key to get index of.
 * @size: size of the array of the hash table
 *
 * Return: index at which the key/value pair should be stored.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	/** get hash */
	hash = hash_djb2(key);

	return (hash % size);
}
