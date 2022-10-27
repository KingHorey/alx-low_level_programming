#include "main.h"

/**
 *_strncat- concatenates two strings
 * @dest: the destination array
 * @src: file whose elements are to be extrated
 * @n: number of bytes to be used when concatenating
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = _strlen(dest);

	int src_index = 0;

	while (src[src_index] != '\0')
	{
		if (src_index == n)
			break;
		else if (src_index < n)
		{
			dest[length] = src[src_index];
			length++;
			src_index++;
		}
	}

	return (dest);
}

/**
 * _strlen - calculates length of a string
 * @s: string to be calculated
 * Return: length of inputed string
 */

int _strlen(char *s)
{
	int length = 0;
	int index = 0;

	while (s[index] != '\0')
	{
		length++;
		index++;
	}
	return (length);
}

