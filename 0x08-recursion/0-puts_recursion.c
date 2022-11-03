#include "main.h"
/**
 * _puts_recursion - print out a string using recursion
 * @s: string to be printed
 * Return: 1 if ended and the recursive call
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar(10);
}

