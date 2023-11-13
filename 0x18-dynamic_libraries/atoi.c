#include "main.h"

/**
 * _atoi - convert a string to an integer
 *@s: string to be converted
 * Return: converted integer
 */

int _atoi(char *s)
{
	int i, res = 0;

	for (i = 0; s[i] != '\0'; ++i)
		res = res * 10 + s[i] - '0';

	return (res);
}

