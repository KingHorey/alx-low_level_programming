#include <stdio.h>
/**
 * main - prints the small letter alphabets in reverse
 * using the putchar method
 * Return: 0 if successfil
 */
int main(void)
{
	int n = 122;

	for (n; n >= 97; n--)
	{
		putchar(n);
	}
	putchar(n);
	return (0);
}
