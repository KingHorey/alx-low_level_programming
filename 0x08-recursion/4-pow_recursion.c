#include "main.h"
/**
 * _pow_recursion- recursion function
 * @x: Integer for which is to be raised to power
 * @y: The number of times the integer X is raised
 * Return: Raised value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

