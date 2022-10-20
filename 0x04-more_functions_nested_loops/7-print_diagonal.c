#include "main.h"
/**
 * print_diagonal- print '\' by the number of times specified
 * by the user
 * @n: number of times to print '\'
 *
 */
void print_diagonal(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (n <= 0)
		{
			putchar(10);
		}
		else
		{
			putchar(92);
		}
	}
	putchar(10);
}

