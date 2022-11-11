#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat- function concatenates two strings into one
 * by a number of bytes
 * @s1: destination pointer
 * @s2: pointer whose strings are to be concatenated
 * @n: number of bytes to concatenate by
 * Return: newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;

	int len = _strlen(s1) + 1; /* get the length of s1 */

	int index1 = 0;
	unsigned int index2 = 0;

	new_str = malloc(len * n);

	if (new_str == NULL)
	{
		return (NULL);
	}

	while (s1[index1] != '\0')
	{
		new_str[index1] = s1[index1];
		index1++;
	}

	while (index2 < n)
	{
		new_str[index1] = s2[index2];
		index2++;
		index1++;
	}

	return (new_str);

}

/**
 * _strlen- calculates the length of a string
 * @c: string to be calculated
 * Return: length of the string
 */

int _strlen(char *c)
{
	int length = 0;
	int index = 0;

	while (c[index] != '\0')
	{
		index++;
		length++;
	}

	return (length);
}
