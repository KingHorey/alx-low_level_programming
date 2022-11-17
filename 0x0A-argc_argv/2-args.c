#include <stdio.h>
/**
 *main - function prints all arguments passed to it
 *@argc: number of arguments passed
 *@argv: array of strings of arguments recieved by function main
 *Return: Always succes
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
