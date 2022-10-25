#include "main.h"
/**
 * print_rev- prints the strings in reverse order
 *@s: string to be reversed
 */

void print_rev(char *s)
{
	int length, i;

	i = 0;

	length = _strlen(s);

	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
/**
 * _strlen - string length checker
 * @c: string to ne checked
 * Return: the length of the string
 */
int _strlen(char *c)
{
	int length = 0;

	while (*c)
	{
		c++;
		length++;
	}
	return (length);
}

