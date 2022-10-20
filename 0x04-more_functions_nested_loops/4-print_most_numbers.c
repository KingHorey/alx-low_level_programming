#include "main.h"
/**
 * print_most_numbers- print single digit numbers
 * Description: print numbers from 0 through till 9
 * but exclude 2 and 4
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if ((num == 2) || (num == 4))
		{
			continue;
		}
		else
		{
			putchar(num + '0');
		}
	}
	putchar('\n');
	return (0);
}

