#include "main.h"

/**
* _strncpy -> a copying function
* @dest: parameter 1
* @src: parameter 2
* @n: parameter 3
* Return: string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] - src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
