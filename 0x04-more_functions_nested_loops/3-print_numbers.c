#include "main.h"
/**
 * print_numbers- prints numbers from 1 to 9
 *
 * Return: 0
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}

