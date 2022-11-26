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
	unsigned int i;
	char *mem;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	mem = malloc(nmemb * size);

	if (!mem)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		mem[i] = 0;

	return (mem);
}

