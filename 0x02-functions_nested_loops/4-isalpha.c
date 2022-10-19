#include "main.h"
/**
 * _isalpha - prototypes function to test for alphabets
 * @c: argument to be checked
 * Description : Function checks the parameter to see if the provided
 * parameter is an alphabet
 *
 * Return: 1 if a n alphabet, 0 if not.
 *
 */

int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 12)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

