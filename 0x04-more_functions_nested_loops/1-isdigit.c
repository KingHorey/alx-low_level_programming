include"main.h"
/**
 * _isdigit- checks the argument for numbers
 * @c: argument to be evaluated
 * Return: 1 if argument is a digit
 * 0 if otherwise
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

