#include "main.h"
/**
 * _print_sign- prototyped function
 * @c: argument that passes the variable to be checked
 *
 * Description: checks the argument and returns a value and a sign
 * indicating the side of 0 the value is
 * Return: 1 if argument is greater than zero
 * + for over zero
 * 0 for equals to zero
 */

int _print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	if (c < 0)
	{
	_putchar('-');
	_putchar(',');
	_putchar(' ');
	return (-1);
	}
	if (c == 0)
	{
	_putchar(0);
	_putchar(',');
	_putchar(' ');
	return (0);
	}
}

