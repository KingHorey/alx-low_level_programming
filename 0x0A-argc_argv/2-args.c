#include <stdio.h>

/**
 * main- program start and end point
 * Description: prints all arguments provided
 * @argc: argument count
 * @argv: pointer to an array pointer
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
