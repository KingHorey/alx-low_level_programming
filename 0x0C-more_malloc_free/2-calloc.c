#include "main.h"
#include <stdlib.h>

/**
 * _calloc- creates a memory using calloc and initializes the values to Zero
 * @nmemb: creates an array of number nmemb
 * @size:
 *
 * Return: pointer name if successful
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *mem;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	unsigned int limit = nmemb * size, i;

	mem = malloc(limit);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < (limit); i++)
		p[i] = 0;

	return (p);
}

