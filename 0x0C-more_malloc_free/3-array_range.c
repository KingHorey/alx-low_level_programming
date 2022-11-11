#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *size, i;

	if (min > max)
		return (NULL);

	size = malloc(sizeof(*size) * max + 1);

	if (size == NULL)
		return (NULL);

	for (i = 0; i <= (max + 1); i++)
	{
		size[i] = min++;
	}

	return (size);
}
