#include <stdio.h>
/**
* main - start
* description - prints out the size in bytes
* Return: 0 if successful
*/
int main(void)
{
	printf("Size of a char is: %lu byte(s)\n", sizeof(char));
	printf("Size of an integer: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu  byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float is : %lu byte(s)\n", sizeof(float));
	return (0);
}

