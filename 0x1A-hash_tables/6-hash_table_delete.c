#include "hash_tables.h"

/**
 * hash_table_delete- deletes the nodes in a hash table
 * ans also the hash table
 * @ht: The hash table struct
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			hash_node_t *temp, *tmp;

			temp = ht->array[i];

			while (temp)
			{
				free(temp->key);
				free(temp->value);
				tmp = temp->next;
				free(temp);
				temp = tmp;
			}
			free(temp);
			ht->array[i] = NULL;
		}
	}
	free(ht->array);
	free(ht);
}
