#include "main.h"
#include <stdlib.h>


/**
 * create_array - creates an array of a specified size and fills it with
 * a specified char
 * @size: size of the array
 * @c: char to be filled
 * Return: pointer to the created array
 *
 */

char *create_array(unsigned int size, char c)
{
	int i;

	char x = c;

	char *str;

	str = malloc(size * sizeof(char));
	
	for (i = 0; str[i] == '\0'; i++)
	{
		if(str == NULL)
			return (0);
		str[i] = x;
	}

	return (str);
}

