#include <stdio.h>
/**
* main - start
* description - prints out the size in bytes
* Return: 0 if successful
*/
int main(void)
{
	printf("size of an integer is: %ld bytes\n", sizeof(int));
	printf("size of a char is: %ld bytes\n", sizeof(char));
	printf("size of a long int: %ld  bytes\n", sizeof(long int));
	printf("size of a long long int: %ld bytes\n", sizeof(long long int));
	printf("size of a float is: %ld bytes\n", sizeof(float));
	return (0);
}

