#include "main.h"

/**
 *_memset - replaces a part of an array with a character
 * @b: the character to be inserted
 * @n: number of times to be replaced
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;
	
	for(count = 0; count < n; count++)
	{
		*(s + count) = b;
	}

	return (s);
}
