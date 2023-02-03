#include "main.h"

/**
 * hash_table_create - creates a pointer to a hash table
 * @size: size of the array that is to be created
 * Return: NULL if malloc fails or if successful the pointer
 * to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;

	hash_node_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		perror("Failed to create pointer to hash table"
		return (NULL);
	}

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	return (hash_table);
}
