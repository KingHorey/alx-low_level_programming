#include "main.h"

/**
 * _strspn - counts the number of occurences of s in accept
 * @s: pointer to be scanned
 * @accept: pointer to find matching characters
 * Return: 0 if none or the number of occurences if successful
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, index;

	while (*s)
	{
		for (index = 0; accept[index] != '\0'; index++)
		{
			if (*s == accept[index])
			{
				count++;
				break;
			}
		}
		if (*s != accept[index])
			return (count);
		s++;
	}
	return (count);
}
