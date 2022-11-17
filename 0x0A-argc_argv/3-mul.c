#include <stdio.h>
#include <stdlib.h>
/**
 * main - main entry point
 * @argc: number of parameters
 * @argv: array of arguments
 * Return: always sucess
*/
int main(int argc, char *argv[])
{
	int num_1;
	int num_2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
	 num_1 = atoi(argv[1]);
	 num_2 = atoi(argv[2]);

	 result = num_1 * num_2;

	printf("%d\n", result);
	}

	return (0);
}
