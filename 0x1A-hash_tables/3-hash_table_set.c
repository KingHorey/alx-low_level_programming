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
	hash_node_t *new_node =  NULL;
	hash_node_t *copy;
	unsigned long int index = 0;

	if (ht == NULL)
		return (0);
	if (*key == '\0' || key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	copy = ht->array[index];
	while (copy)
	{
		if (strcmp(copy->key, key) == 0)
		{
			free(copy->key);
			free(copy->value);
			copy->key = strdup(key);
			copy->value = strdup(value);
			return (1);
		}
		copy = copy->next;
	}
	new_node = malloc(sizeof(struct hash_node_s));
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
