#include "main.h"
/**
 * print_diagonal- print '\' by the number of times specified
 * by the user
 * @n: number of times to print '\'
 *
 */
void print_diagonal(int n)
{
	int x, counter;

	if (n <= 0)
	{
		_putchar(10);
	}
	for (x = 0; x < n; x++)
	{
	for (counter = 0; counter < x; counter++)
	{
		_putchar(' ');
	}
	_putchar(92);
	_putchar(10);
	}
}

