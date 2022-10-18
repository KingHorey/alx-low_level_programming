#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * returns 0 if it is lowercase and 1 if it is uppercase
 * @c: character to be checked
 * Return: 0 if successful
 */

int _islower(int c)
{
	char checker[] = {'H', 'o', 'O', 'm'};
	int i;
	char checkers;
	
	for(i=0; checker[i];i++)
	{
	checkers = _islower(checker[i]);
	_putchar(checkers);
	}
	return (0);
}

