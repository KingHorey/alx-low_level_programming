#include "main.h"

/**
 * _strcat- concatenates two strings into the dest array/pointer
 *@dest: pointer that other strings will be added to
 *@src: pointer/array to be copied
 *Return: concatenated array
 */

char *_strcat(char *dest, char *src)
{

	int index_dest = _strlen(dest);
	int size = index_dest;

	int i = 0;

	while (src[i] != '\0')
	{
		*(dest + size) = *(src + i);
		size++;
		i++;
	}
	return (dest);
}

/**
 *_strlen- Calculates length of the destination array
 *@s : Array to get length
 *Return: length of the array
 *
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		s++;
		length++;
	}
	return (length);

}

