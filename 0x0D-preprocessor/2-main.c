#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the current file being processed
 * Return: 0
 */

int main(void)
{
	int len = 0, i;

	while (__BASE_FILE__ && __BASE_FILE__[len])
		len++;

	for (i = 0; i < len; i++)
		_putchar(0 + __BASE_FILE__[i]);
	printf("\n");
}
