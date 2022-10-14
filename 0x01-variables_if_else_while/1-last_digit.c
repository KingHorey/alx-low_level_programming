#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates a pseudo random number for the
 * variable n
 *
 * Description: and runs a relational checck to confirm
 * if the final digit is greater, lesser or equal
 * to parameters set
 * The last digit of the int n is gotten by dividing n by 10
 * using the modulus operator
 *
 * Return: 0 if successful
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	} else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	} else if ((last_digit < 6) && (last_digit != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	return (0);
}

