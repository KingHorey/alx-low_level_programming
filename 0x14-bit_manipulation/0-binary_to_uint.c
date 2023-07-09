#include "main.h"

/**
 * binary_to_uint- function converts a binary number
 * to and unsigned int
 *
 * @b: Pointer to the binary number to be converted
 * Return: the converted number if *b is a binary
 * or NULL if the strig is 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	unsigned int strLen;
	unsigned int len;
	unsigned int index;
	unsigned int i = 0;
	unsigned int decNum = 0;

	if (!b || !*b)
		return (0);
	strLen = length(b);
	len = strLen - 1;
	index = len;
	for (i = 0; i <= len ; i++)
	{
		if (*(b + i) < '0' || *(b + i) > '9')
			return (0);
		result =  (*(b + i) - '0') * power(2, index);

		index--;
		decNum += result;
	}
	return (decNum);
}

/**
 * length - function to determine the length of a string
 *  @line: pointer to the string
 *  Return: the length of the string
 */

unsigned int length(const char *line)
{
	unsigned int len = 0;
	unsigned int i;

	for (i = 0; *(line + i) != '\0'; i++)
	{
		len++;
	}
	return (len);
}


/**
 * power - calculates recursively, the exponent of a number
 * @base: the base number
 * @exponent: number to raise the base by
 * Return: base if the exponent is 1 or recursively
 * get the power
 */

unsigned int power(unsigned int base, unsigned int exponent)
{
	if (exponent == 0)
		return (1);
	return (base * power(base, exponent - 1));
}
