#include "main.h"

/**
 * is_palindrome - checks if a function is palindrome
 * @s: character to be scanned
 * Return: 1 if palindrome or 0 if not
 */


int is_palindrome(char *s)
{
	int l = 0, length = _strlen(s);

	return (check(s, l, length - 1));
}

/**
 * check - recursively check a string
 * @s: string to be scanned
 * @l: left index
 * @r: right index
 * Return: 1 if palindrome, 0 if not
 */

int check(char *s, int l, int r)
{
	if ((s == NULL) || (l < 0) || (r < 0))
		return (0);
	if (l >= r)
		return (1);
	if
		(s[l] == s[r])
			return (check(s, l + 1, r - 1));
	else
		return (0);
}

/**
 * _strlen - gets the length of a string
 * @s: string to be looped over
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	if (s[len] != '\0')
		len += _strlen(s + 1) + 1;

	return (len);
}
