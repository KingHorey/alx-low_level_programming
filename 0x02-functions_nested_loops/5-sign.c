#include "main.h"
/**
 * print_sign- prototyped function
 * @n: argument that passes the variable to be checked
 *
 * Description: checks the argument and returns a value and a sign
 * indicating the side of 0 the value is
 * Return: 1 if argument is greater than zero
 * + for over zero
 * 0 for equals to zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar(0);
	return (0);
	};
}

