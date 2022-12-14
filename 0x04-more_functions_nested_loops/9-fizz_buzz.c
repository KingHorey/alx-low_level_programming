#include <stdio.h>
#include "main.h"
/**
 *main - start function
 * Description: prints out integers from 1 to 100
 * but replaces multiples of 3 with 'Fizz' and that of
 * 5 with 'Buzz'
 *
 * Return: 0
 */

int main(void)
{
	int numbers;

	for (numbers = 1; numbers < 101; numbers++)
	{
		if ((numbers % 3 == 0) && (numbers % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (numbers % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (numbers % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (numbers == 1)
		{
			printf("%d", numbers);
		}
		else
		{
			printf(" %d", numbers);
		}
	}
	putchar(10);
	return (0);
}

