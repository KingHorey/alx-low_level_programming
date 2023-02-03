#include "hash_tables.h"

/**
 * create_node - creates a pointer to HashTable Item
 * @key: node key
 * @value: value of the key
 * Return: Item
 */


hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	if ((*key == '\0') || (key == NULL))
		return (0);

	new_node = malloc(sizeof(struct hash_node_s));

	if (!new_node)
		return (NULL);
	new_node->key = malloc(strlen(key) + 1);

	if (!new_node->key)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = malloc(strlen(value) + 1);

	if (!new_node->value)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = malloc(sizeof(hash_node_t));
	if (!new_node->next)
	{
		free(new_node);
		return (NULL);
	}
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	new_node->next = NULL;

	return (new_node);
}


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
	hash_node_t *item = create_node(key, value);
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	hash_node_t *current_item = ht->array[index];

	if (current_item == NULL)
	{
		item->next = ht->array[index];
		ht->array[index] = item;
	}

	return (1);
}
