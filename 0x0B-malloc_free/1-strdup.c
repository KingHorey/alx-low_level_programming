#include "main.h"
#include <stdlib.h>

/**
 * _strdup- copies a string into a newly allocated pointer
 * @str: string to be duplicated
 * Return: duplicated string
 */

char *_strdup(char *str)
{
	char *s;

	int len = _strlen(str);

	int i;

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}

	return (s);

}

/**
 * _strlen- calculates length of a string
 * @s: string to be calculated
 * Return: length of inputed string
 */

int _strlen(char *s)
{
	int i = 0;
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
		i++;
	}

	return (i);
}
