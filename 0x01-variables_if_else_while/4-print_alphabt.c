#include <stdio.h>
/**
 * main - Function prints the alphabets in small letters
 * Description - This function makes use of putchar to print out
 * the alphabets in small letters but excludes the letters q and e
 * Return: 0 if not successful
 */
#include <stdio.h>

int main(void)
{
	int n = 96;

	while (n <= 121)
	{ n++;
	if ((n == 101) || (n == 113))
	{
	continue;
	}
	putchar(n);
	}
	putchar(10);

	return (0);
}

