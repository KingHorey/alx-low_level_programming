#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */

#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int array[10] = {
		10, 1, 21, 3, 4, 21, 6, 7, -1, 9
	};

	printf("Found at index: %d\n", linear_search(array, 10, 21));
	return (0);
}
