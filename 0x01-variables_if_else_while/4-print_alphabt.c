#include <stdio.h>
/**
 * main - Function prints the alphabets in small letters
 * Description - This function makes use of putchar to print out
 * the alphabets in small letters but excludes the letters q and e
 * Return: 0 if not successful
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if ((n == 101) || (n == 113))
		{
			continue;
			n++;
		}
		else 
		{
			putchar(n);
		}
		n++;
	}
	putchar(10);
	return (0);
}
