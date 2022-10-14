#include <stdio.h>
/**
 * main - function prints out the alphabets
 * Description -  This function prints out the alphabets
 * (small letters first and when completed, prints the uppercase)
 * Return: 0 if successful
 *
 */

int main(void)
{
	int n = 97, N = 65;

while (n <= 122)
	{
	putchar(n);
	n++;
	}
while (N <= 90)
	{
	putchar(N);
	N++;
	}
	putchar(10);
	return (0);
}

