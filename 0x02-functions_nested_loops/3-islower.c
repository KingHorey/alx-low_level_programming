#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * returns 0 if it is lowercase and 1 if it is uppercase
 * @c: character to be checked
 * Return: 0 if successful
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (0);
	}
	else
	{
		return (1);
	}
	return (0);
}

