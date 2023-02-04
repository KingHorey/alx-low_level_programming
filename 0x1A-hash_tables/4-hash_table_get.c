#include "hash_tables.h"

/**
 * hash_table_get - gets the value from a hash table
 * @ht: hash table
 * @key: the key to be hashed
 * Return: The value if found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	hash_node_t *item = ht->array[index];

	if (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
	}

	return (NULL);
}
