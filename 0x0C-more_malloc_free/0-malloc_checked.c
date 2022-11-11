#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - creates an array using malloc
 * @b: the size to use when allocating memory
 * Return: the memory allocated
 */

void *malloc_checked(unsigned int b)
{
	int *tab;

	tab = malloc(b);

	if (tab == NULL)
	{
		exit(98);
	}

	return (tab);
}
