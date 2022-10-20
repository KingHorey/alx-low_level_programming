#include "main.h"
/**
 * print_square - prints '#' the number of times specified by the user
 * both row and column
 *
 * @size- number of times '#' is to be printed
 */

void print_square(int size)
{
	int outer, inner;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (outer = 0; outer < size; outer++)
		{
			_putchar('#');
			for (inner = 1; inner < n; inner++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
}

