#include "main.h"
/**
 * _strspn- Prints the length of a sbustring
 * @s: str1 which is the main string to be checked
 * @accept: the substring to be searched for in main string
 * Return: The number of occurence of str(accept) in str1 (s) before
 * a character that does not occur
 */

unsigned int _strspn(char *s, char *accept)
{
	int count1, count2, result = 0;

	for (count1 = 0; s[count1] != '\0'; count1++)
	{
		for (count2 = 0; accept[count2] != '\0'; count2++)
		{
			if (s[count1] == accept[count2])
			{
				result++;
			}
			else if ((accept[count2] == '\0') && (s[count1] != accept[count1]))
			{
				s[count1] == '\0';
			}
		}
	}

	return (result);
}

