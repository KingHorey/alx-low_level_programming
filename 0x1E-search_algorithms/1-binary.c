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
	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	return (get_value(array, size, value));

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
	int mid, i;

	mid = size / 2;
	if (size == 2)
		mid = 0;
	else if (size % 2 == 0)
	{
		mid = mid - 1;
	}
	
	printf("Searching in array: ");
	i = 0;
	while (i <= (int)size - 1)
	{
		printf("%d", array[i]);
		if (i != (int)size - 1)
			printf(", ");
		i++;
	}
	printf("\n");

	if (size == 0)
		return (-1);

	if (array[mid] == value)
		return (array[mid]);
	/* check if the value at the middle is greater than value */
	
	if (value > array[mid])
	{
		return (get_value(&array[mid + 1], mid, value));
	}
	if (value < array[mid])
	{
		return (get_value(array, mid, value));
	}
	return (-1);
}
