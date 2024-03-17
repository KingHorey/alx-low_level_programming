#include "search_algos.h"

/**
 * binary_search - makes uses of binary search to get the specified value
 *
 * @array: sorted array to be used for searching
 * @size: size of the array
 * @value: number to be searched
 *
 * Return: searched value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int r_value, i;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	r_value = (get_value(array, size, value));
	if (r_value != -1)
	{
		i = 0;
		while (i < (int) size)
		{
			if (array[i] == r_value)
				return (i);
			i++;
		}
	}
	return (-1);
}

/**
 * get_value - gets the value of the array
 *
 * @array: sorted array to be used for searching
 * @size: size of the array
 * @value: number to be searched
 *
 * Return: searched value or -1 if not found
 */

int get_value(int *array, size_t size, int value)
{
	int mid, i, new_size, real_size;

	if (array == NULL)
		return (-1);

	/* search the array */
	printf("Searching in array:");
	i = 0;

	while (i < (int) size)
	{
		if (i == (int) size - 1)
			printf("%d \n", array[i]);
		else
			printf("%d, ", array[i]);
		i++;
	}
	if ((size == 1) && (array[0] != value))
		return (-1);

	/* get mid point and size */
	real_size = (int) size - 1;
	mid = real_size / 2;
	new_size = real_size - mid;

	/* compare value with value at mid point */
	if (array[mid] == value)
		return (array[mid]);
	else if (value > array[mid])
	{
		return (get_value(array + mid + 1, new_size, value));
	}
	else if (value < array[mid])
	{
		return (get_value(array, mid, value));
	}

	return (-1);
}
