#include "main.h"
/**
 * print_line- outputs '_' by the number of times specified by the
 * user
 * @n: the number of times '_' is to be outputted
 * Return: 0
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (n <= 0)
		{
			_putchar(10);
		}
		else
		{
			_putchar(95);
		}
	}
	_putchar(10);
	return (0);
}

