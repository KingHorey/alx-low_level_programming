#include "hash_tables.h"

/**
 * hash_table_print- prints key, value of a hash table
 * @ht: hash table
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j = 0;

	if (ht == NULL)
		printf("\n");
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			hash_node_t *ptr = ht->array[i];

			while (ptr)
			{
				if (j > 0)
					printf(", ");
				printf("'%s': '%s'", ptr->key, ptr->value);
				ptr = ptr->next;
				j++;
			}
		}
	}
	printf("}\n");
}
