#include <stdio.h>
/**
 * main - function outputs the hexadecimal (base 16)
 * Return: 0 if successful
 */
int main(void)
{
	int n, m, counter2, counter1;

	for (n = '0', counter1 = '9'; n <= counter1; n++)
	{
	putchar(n);
	}
	for (m = 'a', counter2 = 'f'; m <= counter2 ; m++)
	{
	putchar(m);
	}
	putchar(10);
	return (0);
}

