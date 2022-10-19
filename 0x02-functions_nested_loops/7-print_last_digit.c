#include "main.h"
/**
 * print_last_digit- prints the last digit of any given integer
 * @c: argument to be checked
 * Return: the last digit
 */

int print_last_digit(int c)
{
	int last_digit;

	last_digit = c % 10 ;
	return (last_digit);
}

