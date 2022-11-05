#include <stdio.h>
/**
 * main- start point
 * @argc: number of arguments passed into main
 * @argv: strings passed to command line
 * Return: 0 if successful
 *
 */

int main(int argc, char *argv[])
{
	if (argc)
	{
		int i = 0;

		while (argv[0][i])
		{
			printf("%c", argv[0][i]);
			i++;
		}
	}
	return (0);
}
