#include "hash_tables.h"

/**
 * key_index - generates the index of a key
 * @key: string passed
 * @size: size of the array
 * Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
