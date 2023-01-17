#include "main.h"

/**
 * _memcpy - copies content of source to destination by a number of bytes
 * @dest: destination pointer
 * @src: source array
 * @n: number of of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[count] = *(src + count);
	}
	return (dest);

}
