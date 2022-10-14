#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function runs a random number
 * and checks for positivity or negativity
 *
 * Return: 0 if successful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is Zero\n", n);
	}
	return (0);
}
