#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: string
 * @value: value associated to the key
 * Return: 1 if successful, 0 if not
 *
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if ((*key == '\0') || (key == NULL))
		return (0);

	new_node = malloc(sizeof(struct hash_node_s));

	if (!new_node)
		return (0);
	new_node->key = malloc(strlen(key) + 1);

	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = malloc(strlen(value) + 1);

	if (!new_node->value)
	{
		free(new_node);
		return (0);
	}
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	
	return (1);
}
