#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	for (register int counter = 0; counter < 10; counter++)
	{
		int x = 'a';

		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar(10);
	}
}

