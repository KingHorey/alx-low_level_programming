#include "main.h"

/**
 * _isalpha - checks if an argument is an alphabet
 * @c: argument to be checked
 * Return: 1 if an alphabet or 0 if not
 *
 */


int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	       return (1);
	else
		return (0);
}	
