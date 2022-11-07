#include <stdio.h>
#include <stdlib.h>

/**
 * notanum - checks a string to confirm if it is a string
 * @s:string to be checked
 * Return: 1 if it is a string or 0 if not
 */
int notanum(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
		{
			return (1);
		}
	}
	return (0);
}

/**
 * main- adds positive integers
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 if successful and 1 if there are characters in the array
 */

int main(int argc, char *argv[])
{
	int i;
	int sums = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (notanum(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sums += atoi(argv[i]);
	}
	printf("%d\n", sums);
	return (0);

}

