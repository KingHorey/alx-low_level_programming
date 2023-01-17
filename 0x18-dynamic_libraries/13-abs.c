#include "main.h"

/**
 * _abs - return the absolute value of argument
 * @n: argument
 * Return: absolute number
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		return (n);
	}
	else
		return (n);
}
