#include "hash_tables.h"

/**
 * hash_table_get - gets the value from a hash table
 * @ht: hash table
 * @key: the key to be hashed
 * Return: The value if found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *item = NULL;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];

	if (ht->array[index] == NULL)
		return (NULL);

	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}

	return (NULL);
}
