#include <stdio.h>
/**
 * main - function outputs the hexadecimal (base 16)
 * Return: 0 if successful
 */
int main(void)
{
	int n, m, counter1 = 9, counter2;

	for (n = '1'; n <= counter1; n++)
	{
	putchar(n);
	}
	for (m = 'a', counter2 = 'e'; m <= counter2 ; m++)
	{
	putchar(m);
	}
	putchar(10);
	return (0);
}

