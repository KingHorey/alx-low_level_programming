#include <stdio.h>
/**
 *main - function prints the number of arguments passed to it
 *@argc: variable holds the number of arguments passed to the function
 *@argv: variable holds the arguments/string value
 *Return: 0
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
