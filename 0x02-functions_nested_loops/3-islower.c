#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * returns 0 if it is lowercase and 1 if it is uppercase
 * @c: character to be checked
 * Return: 0 if successful
 */

int _islower(int c)
{
	c = _islower('H');
	_putchar(c + 'O');
	c = _islower('o');
	_putchar(c + 'O');
	c = _islower(108);
	_putchar(c + 'O');
	_putchar('\n');
	return (0);
}

