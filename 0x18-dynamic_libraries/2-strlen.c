#include "main.h"

/**
 * _strlen- length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0, len = 0;

	while (s && s[i])
	{
		i++;
		len++;
	}
	return (len);
}
