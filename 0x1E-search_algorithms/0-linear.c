#include "search_algos.h"

/**
 * linear_search - search for a value using
 * linear search algorithm
 *
 * @array: array to be searched
 * @size: size of the array
 * @value: integer to be searched
 *
 * Return: The value if found or -1
 *
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	if (size == 0)
		return (-1);

	i = 0;

	while (i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
