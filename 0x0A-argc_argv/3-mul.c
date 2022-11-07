#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies integers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{

	if (argc < 3)
		printf("Error");
	else
	{
		printf("%d", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
