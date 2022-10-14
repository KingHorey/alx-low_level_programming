#include <stdio.h>

/**
 * main - prints the alphabets in small letters
 * Description -  This function makes use of the putchar method
 * to print out the small letters.
 * Please note that the integers are in ASCII format
 *
 * Return: 0 if successful
 */

int main(void)
{
	int n = 97;

while (n <= 122)
	{
	putchar(n);
	n++;
	}
    putchar(10);
	return (0);
}
