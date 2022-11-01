#include "main.h"

/**
 *_strpbrk - check for the first occcurence of a char in substring
 * * @s: the string to be checked
 * @accept: string which characters will be checked
 * Return:The searched string
 */

char *_strpbrk(char *s, char *accept)
{
        short int outer;

	while (*s)
	{
		outer = 0;
		while (accept[outer] != '\0')
		{
			if (*s == accept[outer])
			{
				return (s);
			}
			outer++;
		}
		s++;
	}
		
        return (0);
}

