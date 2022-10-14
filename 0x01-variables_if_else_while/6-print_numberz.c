#include <stdio.h>
/**
 * main - function makes use of the putchar to print out
 * numbers instead of characters
 * Return: 0 if successful
 */

int main(void)
{
	int n = '0', counter = 0;

	while (counter < 10)
	{
	putchar(n);
	n++;
	counter++;
	}
	putchar(10);
	return (0);
}
