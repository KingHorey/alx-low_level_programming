#include "main.h"

/**
* rev_string-> reversing a string
* @s: parameter s
*/

void rev_string(char *s)
{
	char tmp;
	int i, length = 0, length1;

	while (s && s[length])
		length++;

	for (i = 0, length1 = length - 1; i < length / 2; i++, length1--)
	{
		tmp = s[length1];
		s[length1] = s[i];
		s[i] = tmp;
	}
}
