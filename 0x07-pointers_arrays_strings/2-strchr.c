#include "main.h"
/**
 * _strchr- print occurence of a char
 * @s: arrayto be scanned
 * @c: character to look for
 * Return: the array
 */

char *_strchr(char *s, char c)
{
	unsigned short int index, inner;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (*(s + index) == c)
		{
			for (inner = index; s[inner] != '\0'; inner++)
			{
				_putchar(*(s + inner));
			}
			break;
		}
	}
	return (0);
}
