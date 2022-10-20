#include "main.h"
/**
 * more_numbers- prints numbers
 *
 * Description: Function prints numbers from 1 to 14
 * followed by a new line (10 times)
 * Return: 0
 */
void more_numbers(void)
{
	int numbers, counter;

	for (counter = 0; counter < 10; counter++)
	{
		for (numbers = 0; numbers < 15; numbers++)
		{
			if (numbers > 9)
			{
				_putchar((numbers / 10) + '0');
			}
			_putchar(numbers % 10 + '0');
		}
	_putchar(10);
	}
}

