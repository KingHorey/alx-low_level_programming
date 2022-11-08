#include "main.h"
#include <stdlib.h>

/**
 * str_concat- concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *str;

	int count = 0, len1, len2, i, lensum;

	if (s1 == NULL || s2 == NULL)
		return ("");

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	lensum = len1 + len2;

	str = malloc(sizeof(char) * (lensum + 1));

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
		count++;
	}

	for (i = 0; i < len2; i++, count++)
	{
		str[count] = s2[i];
	}

	return (str);
}

/**
 * _strlen- calculates the length of a string
 * @s: string
 * Return: s length
 *
 */

int _strlen(char *s)
{
	int index = 0;
	int length = 0;

	while (s[index] != '\0')
	{
		index++;
		length++;
	}

	return (length);

}
