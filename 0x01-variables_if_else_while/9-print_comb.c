#include <stdio.h>
/**
 * main - function prints comma separated integers in ascending order
 * Return: 0 if successful
 *
 */
int main(void)
{
	int n, comma = 44, end_point = 9, space = 32, new_line = 10;

	/**
	 * N is the start_point for the integer to be printed
	 * comma is the variable for the ASCII value of ","\
	 * space is the variable that stores the ASCII value for whitespace
	 * new_line is the variable that stores the ASCII value for a new line
	 */

	for (n = 0; n <= end_point; n++)
	{
	putchar(n);
	putchar(comma);
	putchar(space);
	}
	putchar(new_line);
	return (0);
}

