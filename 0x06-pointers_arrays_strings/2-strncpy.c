#include "main.h"

/**
 * _strncpy- copied a string
 * @dest: the destination array
 * @src: array to be copied
 * @n: number of bytes to be used when copying
 * Time: 19:52
 * date: 27th Oct 22
 * Author: Oreoluwa S. Akinbo
 * Return: The new array with the copied content
 */

char *_strncpy(char *dest, char *src, int n)
{
	int length = _strlen(dest);

	int i;

	for (i = 0; i < length; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
		else if (i == n)
			break;
	}

	return (dest);
}

/**
 *_strlen- calculates the length of a string
 * @s: string to be calculated
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

