#include "main.h"
/**
 * _strlen_recursion - Calculate the length of a string
 * @s: The string to be recursed
 * Return: length of provided string
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
